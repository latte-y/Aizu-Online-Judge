#include <iostream>

void timeConversion(int time) {
	int h, m, s;

	h = time / 3600;
	m = (time % 3600) / 60;
	s = (time % 3600) % 60;

	std::cout << h << ':' << m<< ':' << s << std::endl;
}

int main() {
	int S;
	std::cin >> S;

	timeConversion(S);

	return 0;
}