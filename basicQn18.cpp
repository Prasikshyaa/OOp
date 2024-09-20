#include <iostream>
using namespace std;

int main() {
    int decimal;
    
    cout << "Input a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "The binary number is: 0" << endl;
        return 0;
    }

    string binary = "";

    int temp = decimal;
    while (temp > 0) {
        binary = (temp % 2 == 0 ? "0" : "1") + binary;  
        temp /= 2;  
    }

 
    cout << "The binary number is: " << binary << endl;

    return 0;
}
