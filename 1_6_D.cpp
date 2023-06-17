#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;
	int A[n][m], b[m], c[n];

	// input of A
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			std::cin >> A[i][j];
		}
	}

	// input of b
	for (int i=0; i<m; i++) std::cin >> b[i];

	// matrix calculation
	for (int i=0; i<n; i++) {
		c[i] = 0;
		for (int j=0; j<m; j++) {
			c[i] += A[i][j] * b[j];
		}
	}

	// output
	for (int i=0; i<n; i++) std::cout << c[i] << std::endl;

	return 0;
}