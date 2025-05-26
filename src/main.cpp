#include <iostream>
#include "loatconfig.hpp"
#include "loatsolver.hpp"
#include "loatintexpr.hpp"
#include <any>
#include <stdexcept>

int main()
{
    LoatConfig::InitialConfig initialConfig1(
        LoatConfig::InitialConfig::Engine::ADCL,
        LoatConfig::InitialConfig::Mode::Safety,
        LoatConfig::InitialConfig::SmtSolver::Z3,
        LoatConfig::InitialConfig::Direction::Forward,
        LoatConfig::InitialConfig::MbpKind::IntMbp,
        false);

    LoatConfig config1(initialConfig1);

    LoatSolver solver1(config1);

    solver1.setParameter(DynamicParameterKey::Log, true);

    LoatIntExprPtr five = LoatIntExpression::mkConst(Rational(5));
    LoatIntExprPtr x = LoatIntExpression::mkPreVar("x");
    LoatIntExprPtr ten = LoatIntExpression::mkConst(Rational(10));

    LoatIntExprPtr fivexplusten = (five * x) + ten;

    std::cout << fivexplusten << std::endl;

    return 0;
}