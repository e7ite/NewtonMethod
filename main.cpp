#include "newton.hpp"

int main()
{	
	std::string tmp;
	double num;

	std::cout << "Enter a function: ";
	std::cin >> tmp;
	std::cout << "Enter first guess: ";
	std::cin >> num;

	Function f(tmp);

	Function fDeriv = f;
	ApplyPowerRule(fDeriv);

	std::cout << ExecuteNewtonMethod(f, fDeriv, num) << '\n';
}
