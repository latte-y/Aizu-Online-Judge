#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
	double a, b;
	std::cin >> a >> b;

	std::cout << static_cast<int>(a/b) << " " << fmod(a,b) << " ";
	std::cout << std::fixed;
	std::cout << std::setprecision(5) << a/b << std::endl;

	return 0;
}