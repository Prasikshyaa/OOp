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
    int num;

  
    cout << "Input a number to find the last prime number before the number: ";
    cin >> num;

    for (int i = num - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << i << " is the last prime number before " << num << endl;
            return 0;
        }
    }

  
    cout << "No prime number exists before " << num << endl;

    return 0;
}
