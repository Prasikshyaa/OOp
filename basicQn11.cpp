#include <iostream>

bool isPowerOfThree(int num) {
    if (num < 1) {
        return false;  
    }

    while (num % 3 == 0) {
        num /= 3;
    }

    return num == 1;
}

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (isPowerOfThree(num)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
