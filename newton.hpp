#include "parser.hpp"
#include <iostream>

/*Currently only modifies first variable*/
void ApplyPowerRule(Function &func);
double ExecuteNewtonMethod(const Function &f, const Function &fPrime, double initGuess);
