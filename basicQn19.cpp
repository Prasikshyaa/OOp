#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Input a binary number: ";
    cin >> binary;

    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);  
        }
    }

    
    cout << "The decimal number: " << decimal << endl;

    return 0;
}
