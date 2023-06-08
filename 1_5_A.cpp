#include <iostream>

void drawRectangle(int H, int W) {
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			std::cout << '#';
		}
		std::cout << std::endl;
	}
}

int main() {
	while (true) {
		int H, W;
		std::cin >> H >> W;

		if (H == 0 && W == 0) break;

		drawRectangle(H, W);
		std::cout << std::endl;
	}
}