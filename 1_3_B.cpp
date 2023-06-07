#include <iostream>

int main() {
    int x;
    int dataset = 1;

    while (std::cin >> x && x != 0) {
        std::cout << "Case " << dataset << ": " << x << std::endl;
        dataset++;
    }

    return 0;
}
/*
	vector ver.
	TODO: 無限ループの修正
*/
// #include <iostream>
// #include <vector>

// int main() {
// 	int count = 1;
// 	std::vector<int> x;

// 	for (;;) {
// 		int num;
// 		std::cin >> num;
// 		x.push_back(num);
// 		if (num == 0) break;
// 	}

// 	for (int i=0; i < x.size(); i++) {
// 		std::cout << "Case " << i+1 << ": " << x[i] << std::endl;
// 	}

// 	return 0;
// }