#include <iostream>

void reverseNumber(int *a, int n) {
	for (int i=0; i<n/2; i++) {
		int temp = a[i];
		a[i] = a[n-1 - i];
		a[n-1 - i] = temp;
	}
}

int main() {
	int n;
	std::cin >> n;

	int a[n];
	for (int i=0; i<n; i++) {
		std::cin >> a[i];
	}

	reverseNumber(a, n);

	for (int i=0; i<n; i++) {
		std::cout << a[i];
		if (i != n-1) std::cout << ' ';
	}
	std::cout << std::endl;

	return 0;
}