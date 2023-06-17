#include <iostream>
#define BUILDING_NUM 4
#define FLOOR_NUM 3
#define ROOM_NUM 10

int main() {
	int n;
	std::cin >> n;

	int peopleNum[BUILDING_NUM][FLOOR_NUM][ROOM_NUM] = {0};

	for (int s=0; s<n; s++) {
		int building, floor, room, persons;
		std::cin >> building >> floor >> room >> persons;
		peopleNum[building-1][floor-1][room-1] += persons;
	}

	for (int i=0; i<BUILDING_NUM; i++) {
		for (int j=0; j<FLOOR_NUM; j++) {
			for (int k=0; k<ROOM_NUM; k++) {
				std::cout << " "  << peopleNum[i][j][k];
			}
			std::cout << std::endl;
		}
		if (i != BUILDING_NUM-1) std::cout << "####################" << std::endl;
	}

	return 0;
}