#include <iostream>
#include <cmath>  

int integerSquareRoot(int n) {

    return static_cast<int>(sqrt(n));
}

int main() {
    int n;

   
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input! Please enter a non-negative integer." << std::endl;
        return 1;
    }

    int result = integerSquareRoot(n);
    std::cout << "Square root of " << n << " = " << result << std::endl;

    return 0;
}
