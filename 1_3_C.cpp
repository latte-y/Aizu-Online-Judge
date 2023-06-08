#include <iostream>

int main() {

	while (true) {
		int x, y;
		std::cin >> x >> y;

		if (x==0 && y==0) break;

		if (x > y) std::cout << y << " " << x << std::endl;
		else std::cout << x << " " << y << std::endl;
	}

	return 0;
}
