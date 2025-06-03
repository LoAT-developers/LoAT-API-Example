#pragma once

#include <any>
#include <string>
#include <vector>
#include <stdexcept> 

#pragma push_macro("EOF")
#undef EOF
#include "CINTParser.h"
#include "CINTBaseVisitor.h"
#pragma pop_macro("EOF")

#include "loattransition.hpp"  
#include "loatboolexpr.hpp"  
#include "loatintexpr.hpp"  

/**
 * TranslatorVisitor
 *
 * This visitor walks the ANTLR-generated parse tree for the CINT grammar
 * and translates each relevant AST node into a set of LoatTransition objects.
 * Instead of returning a solver at the end, it simply accumulates all transitions
 * in an internal vector.  The client can then retrieve that vector and add each
 * transition to a LoatSolver manually.
 */
class TranslatorVisitor : public CINTBaseVisitor {
public:
    TranslatorVisitor();

    /**
     * getTransitions
     *
     * Returns the complete list of LoatTransition instances that were produced
     * while visiting the parse tree.  The client is responsible for adding these
     * transitions into a LoatSolver to perform safety/unsafety checks.
     */
    std::vector<LoatTransition> getTransitions() const;

    // ================================
    // Visitor methods for expressions
    // ================================

    /**
     * visitNum_expr
     *
     * Called for every integer expression (num_expr) in the AST.  Produces a
     * LoatIntExprPtr representing constants, variables, addition, subtraction,
     * multiplication, negation, or nondeterministic calls.
     *
     * Grammar rule:
     *   num_expr
     *     : '(' num_expr ')'
     *     | '-' num_expr
     *     | num_expr '*' num_expr
     *     | num_expr '+' num_expr
     *     | num_expr '-' num_expr
     *     | V
     *     | ZERO
     *     | POS
     *     | nondet
     *     ;
     */
    virtual std::any visitNum_expr(CINTParser::Num_exprContext* ctx) override;

    /**
     * visitBool_expr
     *
     * Called for every boolean expression (bool_expr) in the AST.  Produces a
     * LoatBoolExprPtr representing comparisons, logical AND/OR/NOT, or boolean
     * literals (TRUE/FALSE).
     *
     * Grammar rule:
     *   bool_expr
     *     : '(' bool_expr ')'
     *     | '!' bool_expr
     *     | bool_expr '&&' bool_expr
     *     | bool_expr '||' bool_expr
     *     | lit
     *     | FALSE
     *     | TRUE
     *     ;
     */
    virtual std::any visitBool_expr(CINTParser::Bool_exprContext* ctx) override;

    /**
     * visitLit
     *
     * Called for every comparison literal (lit) in the AST.  Translates
     * num_expr relop num_expr into a boolean comparison (Eq, Neq, Lt, Le, Gt, Ge).
     *
     * Grammar rule:
     *   lit : num_expr relop num_expr ;
     */
    virtual std::any visitLit(CINTParser::LitContext* ctx) override;

    // ================================
    // Visitor methods for statements
    // ================================

    /**
     * visitAssignment
     *
     * Called for every assignment statement in the AST.  Creates a transition
     * from the current location to a new location with a guard representing
     * the assignment's effect (x' = rhs).  The client can add other frame
     * conditions if needed.
     *
     * Grammar rule:
     *   assignment : V ASSIGN num_expr TERMINATOR ;
     */
    virtual std::any visitAssignment(CINTParser::AssignmentContext* ctx) override;

    /**
     * visitLoop
     *
     * Called for every while-loop in the AST.  Generates three locations:
     *   1) A transition from the entry location to the loop body under the
     *      loop guard (bool_expr).
     *   2) A transition from the entry location to the exit location when
     *      the guard is false (negated guard).
     *   3) At the end of the loop body, a transition back to the loop entry
     *      with an “always true” guard to represent iteration.
     *
     * Grammar rule:
     *   loop : WHILE '(' bool_expr ')' '{' instructions? '}' ;
     */
    virtual std::any visitLoop(CINTParser::LoopContext* ctx) override;

    /**
     * visitCondition
     *
     * Called for every if-else statement in the AST.  Produces:
     *   1) A transition from the entry location to the “then” block under the
     *      true guard (bool_expr).
     *   2) A transition from the entry location to either the “else” block (if
     *      present) or the merge location under the negated guard.
     *   3) Transitions at the end of each branch (then/else) back to the merge
     *      location under an “always true” guard.
     *
     * Grammar rule:
     *   condition
     *     : IF '(' bool_expr ')' '{' then '}' ( ELSE '{' else '}' )?
     *     ;
     */
    virtual std::any visitCondition(CINTParser::ConditionContext* ctx) override;

    /**
     * visitAssert_stmt
     *
     * Called for every assert(...) statement in the AST.  Produces two
     * transitions:
     *   1) A “success” transition under the guard (bool_expr == true).
     *   2) A “failure” transition under the negated guard (bool_expr == false)
     *      to a special sink location (e.g. “sink_<n>”).  The client can use
     *      these failure edges to detect unsafety.
     *
     * Grammar rule:
     *   assert_stmt : ASSERT '(' bool_expr ')' TERMINATOR ;
     */
    virtual std::any visitAssert_stmt(CINTParser::Assert_stmtContext* ctx) override;

    /**
     * visitMain
     *
     * Called once at the top level (“main : pre declarations? instructions? post;”).
     * Visits all instructions in sequence.  After visiting all instructions,
     * emits a final unguarded transition to an end location.
     */
    virtual std::any visitMain(CINTParser::MainContext* ctx) override;

private:
    /** 
     * Accumulated transitions for the entire program.
     * The client retrieves these and inserts them into a LoatSolver manually.
     */
    std::vector<LoatTransition> transitions;

    /**
     * Name of the “current” location in the transition system.
     * Starts at “L0” and increments each time a new location is created.
     */
    std::string currentLocationName;

    /**
     * Counter used to generate fresh location names “L1, L2, …”.
     */
    int locationCounter;

    /**
     * makeNewLocation
     *
     * Creates a fresh location named “L<counter>” (e.g. “L1”, “L2”, …),
     * increments the locationCounter, and returns it.
     */
    LoatLocation makeNewLocation();
};
