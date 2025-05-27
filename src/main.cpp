#include <iostream>
#include "loatconfig.hpp"
#include "loatsolver.hpp"
#include "loatintexpr.hpp"
#include "loatlocation.hpp"
#include <any>
#include <stdexcept>

int main()
{
    LoatSolver solver = LoatSolver::forSafety();

    solver.setStartLocation(LoatLocation("q0"));
    solver.addSinkLocation(LoatLocation("sink"));
    solver.add(LoatTransition(LoatLocation("q0"), LoatLocation("sink"), LoatIntExpression::mkConst(0) == LoatIntExpression::mkConst(1)));
    LoatResult result = solver.check();

    std::cout << " ====================================" << std::endl
              << std::endl;

    LoatSolver solver2 = LoatSolver::forUnsafety();

    solver2.setStartLocation(LoatLocation("q0"));
    solver2.addSinkLocation(LoatLocation("sink"));
    solver2.add(LoatTransition(LoatLocation("q0"), LoatLocation("sink"), LoatIntExpression::mkConst(0) != LoatIntExpression::mkConst(1)));
    LoatResult result2 = solver2.check();

    return 0;
}