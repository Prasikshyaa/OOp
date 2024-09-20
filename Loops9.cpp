#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Input a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;     
        reverse = reverse * 10 + digit; 
        num /= 10;                 
    }
    cout << "The number in reverse order is: " << reverse << endl;

    return 0;
}
