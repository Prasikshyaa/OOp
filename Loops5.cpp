#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int upperLimit;

    cout << "Input the upper limit: ";
    cin >> upperLimit;

    cout << "The non-prime numbers are:" << endl;
    for (int num = 2; num <= upperLimit; num++) {

        if (!isPrime(num)) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

