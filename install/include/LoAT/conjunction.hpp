#pragma once

#include "boolexpr.hpp"
#include "theory.hpp"

#include <variant>

class Conjunction : public LitSet {

public:
    // inherit constructors of base class
    using LitSet::LitSet;

    bool isLinear() const;
    void collectVars(VarSet &vars) const;
    VarSet vars() const;
    static Conjunction fromBoolExpr(const Bools::Expr &);

};

size_t hash_value(const Conjunction&);
std::ostream& operator<<(std::ostream &s, const Conjunction &l);
Conjunction operator&&(const Conjunction &fst, const Conjunction &snd);
