#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;

	typedef std::pair<char, int> card;
	std::vector<card> card_vec;

	// Input
	for (int i = 0; i<n; i++) {
		char suit;
		int rank;

		std::cin >> suit >> rank;
		card_vec.push_back(card(suit, rank));
	}

	std::vector<char> suits_vec = { 'S', 'H', 'C', 'D' };
	
	// 4行13列のbool型vector bool presence[4][13]
	std::vector<std::vector<bool>> presence(4, std::vector<bool>(13, false));

	for (const std::pair<char, int>& c: card_vec) {
		char suit = c.first;
		int rank = c.second;

		// Mark the presence of a cards
		switch (suit) {
			case 'S':
				presence[0][rank -1] = true;
				break;
			case 'H':
				presence[1][rank -1] = true;
				break;
			case 'C':
				presence[2][rank -1] = true;
				break;
			case 'D':
				presence[3][rank -1] = true;
				break;
			default:
				break;
		}
	
	}

	// Output of missing cards
	for (int i=0; i<4; i++) {
		for (int j=0; j<13; j++) {
			// if (presece[i][j] == false)
			if (!presence[i][j]) {
				std::cout << suits_vec[i] << ' ' << j+1 << std::endl;
			}
		}
	}

	return 0;
}