#include <iostream>

int addDigits(int num) {
    while (num >= 10) { 
        int sum = 0;
        std::cout << "Summing digits of " << num << ": ";
        
        while (num > 0) {
            int digit = num % 10;  
            sum += digit;          
            std::cout << digit;
            num /= 10; 
            if (num > 0) {
                std::cout << " + ";  
            }
        }
        std::cout << " = " << sum << std::endl;
        num = sum; 
    }
    return num;  
}

int main() {
    int num;

    std::cout << "Enter a non-negative number: ";
    std::cin >> num;

    int result = addDigits(num);
    std::cout << "Final result: " << result << std::endl;

    return 0;
}
