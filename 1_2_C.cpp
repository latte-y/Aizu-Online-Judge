#include <iostream>

void mySort(int *array, int n) {
	for (int i=0; i<n; i++) {
		if (array[i] > array[i+1]) {
			int tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
		}
	}
	
	n--;
	if (n == 1)	mySort(array, 1);
}

int main() {
	int a, b, c;

	int array[3];
	for (int i=0; i<3; i++) {
		std::cin >> array[i];
	}

	mySort(array, 2);

	for (int i=0; i<3; i++) {
		if (i==2) {
			std::cout << array[i] << std::endl;
			break;
		}
		std::cout << array[i] << ' ';
	}

	return 0;
}

/*
	選択ソート
*/
// #include <iostream>

// void mySort(int *array, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (array[j] < array[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i) {
//             int tmp = array[i];
//             array[i] = array[minIndex];
//             array[minIndex] = tmp;
//         }
//     }
// }

// int main() {
//     int array[3];
//     for (int i = 0; i < 3; i++) {
//         std::cin >> array[i];
//     }

//     mySort(array, 3);

//     for (int i = 0; i < 3; i++) {
//         if (i == 2) {
//             std::cout << array[i] << std::endl;
//         } else {
//             std::cout << array[i] << ' ';
//         }
//     }

//     return 0;
// }