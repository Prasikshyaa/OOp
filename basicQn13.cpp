#include <iostream>
#include <vector>


bool isPrime(int num) {
    if (num <= 1) return false;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;  
    }
    return true;  
}


int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            count++;  
        }
    }
    return count;
}

int main() {
    int n;

  
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive number." << std::endl;
        return 1;
    }

    int result = countPrimes(n);
    std::cout << "Number of prime numbers less than " << n << " is " << result << std::endl;

    return 0;
}
