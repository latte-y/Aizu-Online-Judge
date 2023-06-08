#include <iostream>
#include <iomanip>

double myMin(double a, double b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

double myMax(double a, double b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main() {
	int n;
	std::cin >> n;

	double a[n];
	for (int i=0; i<n; i++) std::cin >> a[i];

	double min = a[0], max = a[0], sum = a[0];
	for (int i = 1; i<n; i++) {
		min = myMin(min, a[i]);
		max = myMax(max, a[i]);
		sum += a[i];
	}

	std::cout << std::fixed;
	std::cout << std::setprecision(0) << min << " " << max << " " << sum << std::endl;
}