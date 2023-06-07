#include <iostream>

bool isInRectangle(int W, int H, int x, int y, int r) {
	bool inRectangle = false;
	if ( r <= x && x <= W-r && r <= y && y <= H-r ) inRectangle = true;
	return inRectangle;
}

int main() {
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;

	if ( isInRectangle(W, H, x, y, r) ) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}

	return 0;
}