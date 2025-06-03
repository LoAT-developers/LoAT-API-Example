#include "TranslatorVisitor.hpp"

using namespace LoatIntExpression;
using namespace LoatBoolExpression;

TranslatorVisitor::TranslatorVisitor()
    : currentLocationName("L0"), locationCounter(0)
{
}

std::vector<LoatTransition> TranslatorVisitor::getTransitions() const
{
    return transitions;
}

LoatLocation TranslatorVisitor::makeNewLocation()
{
    ++locationCounter;
    std::string name = "L" + std::to_string(locationCounter);
    return LoatLocation(name);
}

// =======================
// 1) Translate integer expressions (num_expr)
// =======================
std::any TranslatorVisitor::visitNum_expr(CINTParser::Num_exprContext *ctx)
{
    // num_expr
    //   : '(' num_expr ')'
    //   | '-' num_expr
    //   | num_expr '*' num_expr
    //   | num_expr '+' num_expr
    //   | num_expr '-' num_expr
    //   | V
    //   | ZERO
    //   | POS
    //   | nondet
    //   ;

    // Variable reference
    if (ctx->V() != nullptr)
    {
        std::string varName = ctx->V()->getText();
        return LoatIntExpression::mkPreVar(varName);
    }

    // Literal zero
    if (ctx->ZERO() != nullptr)
    {
        boost::multiprecision::cpp_rational r(0);
        return mkConst(r);
    }

    // Positive integer literal (non-zero)
    if (ctx->POS() != nullptr)
    {
        std::string lit = ctx->POS()->getText();
        boost::multiprecision::cpp_int c(lit);
        boost::multiprecision::cpp_rational r(c);
        return mkConst(r);
    }

    // Nondeterministic call: __VERIFIER_nondet_int()
    if (ctx->nondet() != nullptr)
    {
        // Represent it as a fresh symbolic variable named "__VER_nondet"
        return LoatIntExpression::mkPreVar("__VER_nondet");
    }

    // Unary minus: '-' num_expr
    if (ctx->MINUS() != nullptr && ctx->num_expr().size() == 1)
    {
        auto subAny = visit(ctx->num_expr(0));
        if (!subAny.has_value())
        {
            throw std::runtime_error("visitNum_expr: expected sub expression for unary minus, but got empty any");
        }
        LoatIntExprPtr subExpr = std::any_cast<LoatIntExprPtr>(subAny);
        boost::multiprecision::cpp_rational minusOne(-1);
        LoatIntExprPtr negOneConst = mkConst(minusOne);
        return mkTimes(negOneConst, subExpr);
    }

    // Binary operations: plus, minus, times
    if (ctx->num_expr().size() == 2)
    {
        auto leftAny = visit(ctx->num_expr(0));
        auto rightAny = visit(ctx->num_expr(1));
        if (!leftAny.has_value() || !rightAny.has_value())
        {
            throw std::runtime_error("visitNum_expr: missing sub‐expressions for binary op");
        }
        LoatIntExprPtr left = std::any_cast<LoatIntExprPtr>(leftAny);
        LoatIntExprPtr right = std::any_cast<LoatIntExprPtr>(rightAny);

        if (ctx->MULT() != nullptr)
        {
            return mkTimes(left, right);
        }
        if (ctx->PLUS() != nullptr)
        {
            return mkPlus(left, right);
        }
        if (ctx->MINUS() != nullptr)
        {
            boost::multiprecision::cpp_rational minusOne(-1);
            LoatIntExprPtr negRight = mkTimes(mkConst(minusOne), right);
            return mkPlus(left, negRight);
        }
    }

    // Parenthesized expression: '(' num_expr ')'
    if (ctx->OPENP() != nullptr && ctx->num_expr().size() == 1)
    {
        return visit(ctx->num_expr(0));
    }

    throw std::runtime_error("visitNum_expr: unrecognized node: " + ctx->getText());
}

// =======================
// 2) Translate comparison literal (lit)
// =======================
std::any TranslatorVisitor::visitLit(CINTParser::LitContext *ctx)
{
    // lit : num_expr relop num_expr ;
    auto lhsAny = visit(ctx->num_expr(0));
    auto rhsAny = visit(ctx->num_expr(1));
    LoatIntExprPtr lhs = std::any_cast<LoatIntExprPtr>(lhsAny);
    LoatIntExprPtr rhs = std::any_cast<LoatIntExprPtr>(rhsAny);

    CINTParser::RelopContext *rop = ctx->relop();

    if (rop->LT() != nullptr)
    {
        return LoatBoolExpression::mkLt(lhs, rhs);
    }
    if (rop->LEQ() != nullptr)
    {
        return LoatBoolExpression::mkLe(lhs, rhs);
    }
    if (rop->EQ() != nullptr)
    {
        return LoatBoolExpression::mkEq(lhs, rhs);
    }
    if (rop->NEQ() != nullptr)
    {
        return LoatBoolExpression::mkNeq(lhs, rhs);
    }
    if (rop->GT() != nullptr)
    {
        return LoatBoolExpression::mkGt(lhs, rhs);
    }
    if (rop->GEQ() != nullptr)
    {
        return LoatBoolExpression::mkGe(lhs, rhs);
    }

    throw std::runtime_error("visitLit: unknown relop in " + ctx->getText());
}

// =======================
// 3) Translate boolean expressions (bool_expr)
// =======================
std::any TranslatorVisitor::visitBool_expr(CINTParser::Bool_exprContext *ctx)
{
    // bool_expr
    //   : '(' bool_expr ')'
    //   | '!' bool_expr
    //   | bool_expr '&&' bool_expr
    //   | bool_expr '||' bool_expr
    //   | lit
    //   | FALSE
    //   | TRUE
    //   ;

    // Boolean false literal
    if (ctx->FALSE() != nullptr)
    {
        // Represent false as (0 == 1)
        auto zero = mkConst(boost::multiprecision::cpp_rational(0));
        auto one = mkConst(boost::multiprecision::cpp_rational(1));
        return LoatBoolExpression::mkEq(zero, one);
    }

    // Boolean true literal
    if (ctx->TRUE() != nullptr)
    {
        // Represent true as (1 == 1)
        auto one1 = mkConst(boost::multiprecision::cpp_rational(1));
        auto one2 = mkConst(boost::multiprecision::cpp_rational(1));
        return LoatBoolExpression::mkEq(one1, one2);
    }

    // Comparison literal
    if (ctx->lit() != nullptr)
    {
        return visit(ctx->lit());
    }

    // Logical NOT: '!' bool_expr
    if (ctx->NOT() != nullptr)
    {
        auto subAny = visit(ctx->bool_expr(0));
        if (!subAny.has_value())
        {
            throw std::runtime_error("visitBool_expr: expected sub‐expression for NOT, but got empty any");
        }
        LoatBoolExprPtr sub = std::any_cast<LoatBoolExprPtr>(subAny);
        return LoatBoolExpression::mkNot(sub);
    }

    // Binary AND / OR
    if (ctx->bool_expr().size() == 2)
    {
        auto leftAny = visit(ctx->bool_expr(0));
        auto rightAny = visit(ctx->bool_expr(1));
        if (!leftAny.has_value() || !rightAny.has_value())
        {
            throw std::runtime_error("visitBool_expr: missing sub‐expressions for AND/OR");
        }
        LoatBoolExprPtr left = std::any_cast<LoatBoolExprPtr>(leftAny);
        LoatBoolExprPtr right = std::any_cast<LoatBoolExprPtr>(rightAny);

        if (ctx->AND() != nullptr)
        {
            LoatBoolExprVec args = {left, right};
            return LoatBoolExpression::mkAnd(std::move(args));
        }
        if (ctx->OR() != nullptr)
        {
            LoatBoolExprVec args = {left, right};
            return LoatBoolExpression::mkOr(std::move(args));
        }
    }

    // Parenthesized boolean: '(' bool_expr ')'
    if (ctx->OPENP() != nullptr && ctx->bool_expr().size() == 1)
    {
        auto inner = visit(ctx->bool_expr(0));
        if (!inner.has_value())
        {
            throw std::runtime_error("visitNum_expr: empty any in parentheses");
        }
        return inner;
    }

    throw std::runtime_error("visitBool_expr: unrecognized node: " + ctx->getText());
}

// =======================
// 4) Translate assignment statements
// =======================
std::any TranslatorVisitor::visitAssignment(CINTParser::AssignmentContext *ctx)
{
    // assignment : V ASSIGN num_expr TERMINATOR ;
    std::string varName = ctx->V()->getText();
    auto rhsAny = visit(ctx->num_expr());

    if (!rhsAny.has_value())
    {
        throw std::runtime_error("visitAssignment: expected integer expression, got empty any");
    }

    LoatIntExprPtr rhs = std::any_cast<LoatIntExprPtr>(rhsAny);

    // Current location → new location under guard (var' == rhs)
    LoatLocation fromLoc(currentLocationName);
    LoatLocation toLoc = makeNewLocation();

    // Build the guard: var_post = rhs
    LoatBoolExprPtr guard = mkEq(LoatIntExpression::mkPostVar(varName), rhs);

    // Create and store the transition
    transitions.emplace_back(fromLoc, toLoc, guard);

    // Update currentLocationName
    currentLocationName = toLoc.getName();
    return std::any();
}

// =======================
// 5) Translate while-loops
// =======================
std::any TranslatorVisitor::visitLoop(CINTParser::LoopContext *ctx)
{
    // loop : WHILE '(' bool_expr ')' '{' instructions? '}' ;
    auto condAny = visit(ctx->bool_expr());
    if (!condAny.has_value())
    {
        throw std::runtime_error("visitLoop: expected boolean condition, got empty any");
    }
    LoatBoolExprPtr condition = std::any_cast<LoatBoolExprPtr>(condAny);

    LoatLocation fromLoc(currentLocationName);
    LoatLocation bodyLoc = makeNewLocation();
    LoatLocation afterLoc = makeNewLocation();

    // Edge: fromLoc --[condition]--> bodyLoc
    transitions.emplace_back(fromLoc, bodyLoc, condition);

    // Edge: fromLoc --[¬condition]--> afterLoc
    LoatBoolExprPtr negCond = mkNot(condition);
    transitions.emplace_back(fromLoc, afterLoc, negCond);

    // Visit instructions inside the loop body
    std::string savedLocation = currentLocationName;
    currentLocationName = bodyLoc.getName();

    if (ctx->instructions() != nullptr)
    {
        for (auto instrCtx : ctx->instructions()->instruction())
        {
            visit(instrCtx);
        }
    }

    // At end of body: unguarded edge back to loop condition
    LoatLocation endBodyLoc(currentLocationName);
    auto trueConst = mkConst(boost::multiprecision::cpp_rational(1));
    auto guardTrue = mkEq(trueConst, trueConst);
    transitions.emplace_back(endBodyLoc, fromLoc, guardTrue);

    // Set currentLocationName to after‐loop location
    currentLocationName = afterLoc.getName();
    return std::any();
}

// =======================
// 6) Translate if-else conditions
// =======================
std::any TranslatorVisitor::visitCondition(CINTParser::ConditionContext *ctx)
{
    // condition
    //   : IF '(' bool_expr ')' '{' then '}' ( ELSE '{' else '}' )?
    //   ;
    auto condAny = visit(ctx->bool_expr());
    if (!condAny.has_value())
    {
        throw std::runtime_error("visitCondition: expected boolean condition, got empty any");
    }
    LoatBoolExprPtr condition = std::any_cast<LoatBoolExprPtr>(condAny);

    // The location we are branching from:
    LoatLocation fromLoc(currentLocationName);

    // Create a fresh "then" location:
    LoatLocation thenLoc = makeNewLocation();

    // Create a fresh "merge/after" location:
    LoatLocation afterLoc = makeNewLocation();

    bool hasElse = (ctx->ELSE() != nullptr);

    // 1) Add transition: fromLoc --[condition]--> thenLoc
    transitions.emplace_back(fromLoc, thenLoc, condition);

    // 2) Add transition for the false branch:
    LoatBoolExprPtr negCond = LoatBoolExpression::mkNot(condition);
    if (hasElse)
    {
        // If there is an else-block, create its entry location here:
        LoatLocation elseLoc = makeNewLocation();
        transitions.emplace_back(fromLoc, elseLoc, negCond);

        // ---- "then" block ----
        currentLocationName = thenLoc.getName();
        if (ctx->then() != nullptr && ctx->then()->instructions() != nullptr)
        {
            for (auto instrCtx : ctx->then()->instructions()->instruction())
            {
                visit(instrCtx);
            }
        }
        // At the end of "then", add unguarded edge into afterLoc:
        {
            LoatLocation endThen(currentLocationName);
            auto one1 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            auto one2 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            LoatBoolExprPtr alwaysTrue = LoatBoolExpression::mkEq(one1, one2);
            transitions.emplace_back(endThen, afterLoc, alwaysTrue);
        }

        // ---- "else" block ----
        currentLocationName = elseLoc.getName();
        if (ctx->else_() != nullptr && ctx->else_()->instructions() != nullptr)
        {
            for (auto instrCtx : ctx->else_()->instructions()->instruction())
            {
                visit(instrCtx);
            }
        }
        // At the end of "else", add unguarded edge into afterLoc:
        {
            LoatLocation endElse(currentLocationName);
            auto one1 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            auto one2 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            LoatBoolExprPtr alwaysTrue = LoatBoolExpression::mkEq(one1, one2);
            transitions.emplace_back(endElse, afterLoc, alwaysTrue);
        }
    }
    else
    {
        // No else-block → on false guard, jump directly to afterLoc
        transitions.emplace_back(fromLoc, afterLoc, negCond);

        // ---- "then" block only ----
        currentLocationName = thenLoc.getName();
        if (ctx->then() != nullptr && ctx->then()->instructions() != nullptr)
        {
            for (auto instrCtx : ctx->then()->instructions()->instruction())
            {
                visit(instrCtx);
            }
        }
        // At the end of "then", add unguarded edge into afterLoc:
        {
            LoatLocation endThen(currentLocationName);
            auto one1 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            auto one2 = LoatIntExpression::mkConst(boost::multiprecision::cpp_rational(1));
            LoatBoolExprPtr alwaysTrue = LoatBoolExpression::mkEq(one1, one2);
            transitions.emplace_back(endThen, afterLoc, alwaysTrue);
        }
    }

    // Continue execution at afterLoc
    currentLocationName = afterLoc.getName();
    return std::any();
}

// =======================
// 7) Translate assert statements
// =======================
std::any TranslatorVisitor::visitAssert_stmt(CINTParser::Assert_stmtContext *ctx)
{
    auto condAny = visit(ctx->bool_expr());
    if (!condAny.has_value())
    {
        throw std::runtime_error("visitAssert_stmt: expected boolean expression, got empty any");
    }
    LoatBoolExprPtr condition = std::any_cast<LoatBoolExprPtr>(condAny);

    LoatLocation fromLoc(currentLocationName);
    LoatLocation toLoc = makeNewLocation();

    // Success transition: fromLoc --[condition]--> toLoc
    transitions.emplace_back(fromLoc, toLoc, condition);

    // Failure transition: fromLoc --[¬condition]--> SINGLE GLOBAL SINK
    LoatBoolExprPtr negCond = mkNot(condition);
    LoatLocation sinkLoc("sink"); //
    transitions.emplace_back(fromLoc, sinkLoc, negCond);

    currentLocationName = toLoc.getName();
    return std::any();
}

// =======================
// 8) visitMain (top-level rule)
// =======================
std::any TranslatorVisitor::visitMain(CINTParser::MainContext *ctx)
{
    // main : pre declarations? instructions? post ;
    // We only care about the instructions section.

    if (ctx->declarations() != nullptr)
    {
        // Skip variable declarations (or optionally record them)
    }

    if (ctx->instructions() != nullptr)
    {
        for (auto instrCtx : ctx->instructions()->instruction())
        {
            visit(instrCtx);
        }
    }

    // After all instructions, emit a final unguarded transition to a new end location.
    LoatLocation finalLoc = makeNewLocation();
    LoatLocation fromLast(currentLocationName);
    auto trueConst = mkConst(boost::multiprecision::cpp_rational(1));
    auto guardTrue = mkEq(trueConst, trueConst);
    transitions.emplace_back(fromLast, finalLoc, guardTrue);

    return std::any();
}
