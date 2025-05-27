#include <iostream>
#include "loatconfig.hpp"
#include "loatsolver.hpp"
#include "loatintexpr.hpp"
#include "loatlocation.hpp"
#include <any>
#include <stdexcept>

int main()
{
    LoatSolver solver1 = LoatSolver::forSafety();
    solver1.setParameter(DynamicParameterKey::Log, true);
    solver1.setParameter(DynamicParameterKey::LogPreproc, true);

    LoatIntExprPtr five = LoatIntExpression::mkConst(Rational(5));
    LoatIntExprPtr x = LoatIntExpression::mkPreVar("x");
    LoatIntExprPtr ten = LoatIntExpression::mkConst(Rational(10));

    LoatIntExprPtr fivexplusten = (five * x) + ten;

    std::cout << fivexplusten << std::endl;

    LoatTransition transition1(
        LoatLocation("start"),
        LoatLocation("end"),
        fivexplusten == LoatIntExpression::mkConst(Rational(15)));

    std::cout << transition1 << std::endl;

    solver1.add(transition1);
    solver1.setStartLocation(LoatLocation("start"));
    solver1.addSinkLocation(LoatLocation("end"));

    LoatResult result = solver1.check();

    if (result == LoatResult::SAT)
    {
        std::cout << "SAT." << std::endl;
    }
    else if (result == LoatResult::UNSAT)
    {
        std::cout << "UNSAT" << std::endl;
    }
    else
    {
        std::cout << "UNKNOWN" << std::endl;
    }

    return 0;
}