#include "newton.h"

/*Currently only modifies first variable*/
void ApplyPowerRule(Function &func)
{
	std::vector<Piece> &pieces = func.GetPieces();
	std::vector<Piece>::iterator i = pieces.begin();
	
	while (i != pieces.end())
	{
		std::vector<Variable>::iterator var = i->variables.begin();

		if (var == i->variables.end())
		{
			if (i->constants.size())
				i = pieces.erase(i);
				
			continue;
		}

		if (!i->constants.size() && var->exponent > 0)
			i->constants.push_back(var->exponent--);
		else
			i->constants.at(0).value *= var->exponent--;

		if (!var->exponent)
			i->variables.erase(var);

		i++;
	}
}

double ExecuteNewtonMethod(const Function &f, const Function &fPrime, double initGuess)
{
	double result = initGuess - f(initGuess) / fPrime(initGuess);

	std::cout << result << '\n';

	if (result < initGuess + 0.00001 && result > initGuess - 0.00001)
		return result;

	return ExecuteNewtonMethod(f, fPrime, result);  
}
