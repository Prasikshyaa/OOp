#include <iostream>

int productOfDigits(int num) {
    int product = 1;
    bool hasNonZeroDigit = false;  

    while (num > 0) {
        int digit = num % 10;  
        if (digit != 0) {     
            product *= digit;
            hasNonZeroDigit = true;
        }
        num /= 10;  
    }

   
    if (!hasNonZeroDigit) {
        return 0;
    }

    return product;
}

int main() {
    int num;

    std::cout << "Input a number: ";
    std::cin >> num;


    if (num < 0) {
        num = -num;
    }

    int result = productOfDigits(num);
    std::cout << "The product of digits of " << num << " is: " << result << std::endl;

    return 0;
}
