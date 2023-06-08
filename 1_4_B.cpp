#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	double r;
	std::cin >> r;

	std::cout << std::fixed;
	std::cout << std::setprecision(6) << M_PI*r*r  << " " << 2*M_PI*r << std::endl;

	return 0;
}