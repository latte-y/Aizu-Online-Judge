#include <iostream>

int main () {
	while (true) {
		int mid, fin, makeup, total = 0;
		std::cin >> mid >> fin >> makeup;

		if ( mid == -1 && fin == -1 && makeup == -1 ) break;

		total = mid + fin;
		char grade;

		if ( mid == -1 || fin == -1) {
			grade = 'F';
		} else if (total >= 80) {
			grade = 'A';
		} else if (total >= 65) {
			grade = 'B';
		} else if (total >= 50) {
			grade = 'C';
		} else if (total >= 30) {
			if (makeup >= 50) {
				grade = 'C';
			} else {
				grade = 'D';
			}
		} else {
			grade = 'F';
		}

		std::cout << grade << std::endl;
	}

	return 0;
}