#include <iostream>

void drawChessboard(int H, int W) {
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			std::cout << ((i + j) % 2 == 0 ? '#' : '.');
		}
		std::cout << std::endl;
	}
}

int main() {
	while (true) {
		int H, W;
		std::cin >> H >> W;

		if (H == 0 && W == 0) break;

		drawChessboard(H, W);
		std::cout << std::endl;
	}
}