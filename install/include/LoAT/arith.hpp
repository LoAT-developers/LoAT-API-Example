#pragma once

#include "itheory.hpp"
#include "arithexpr.hpp"
#include "arithlit.hpp"
#include "arithsubs.hpp"

struct Arith {

    using Lit = ArithLitPtr;
    using Var = ArithVarPtr;
    using Subs = ArithSubs;
    using Expr = ArithExprPtr;
    using Const = Int;
    using Model = linked_hash_map<Var, Const>;
    using Renaming = arith_var_map;

    static Expr constToExpr(const Const &val) {
        return arith::mkConst(val);
    }

    static Expr varToExpr(const Var &var) {
        return arith::toExpr(var);
    }

    static Expr anyValue() {
        return arith::mkConst(0);
    }

    static Var next() {
        return ArithVar::next();
    }

};

namespace arith {

extern Arith t;

}

static_assert(ITheory<Arith>);
