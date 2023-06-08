#include <iostream>

int main() {
    int a, b;
    char op;

    while (std::cin >> a >> op >> b) {
        if (op == '?') {
            break;
        }

        int result;

        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
        }

        std::cout << result << std::endl;
    }

    return 0;
}