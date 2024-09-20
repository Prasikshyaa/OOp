#include <iostream>
#include <string>
using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            cout << "Invalid binary input!" << endl;
            exit(1);
        }
    }
    return binary;
}

string twosComplement(string binary) {
   
    int n = binary.length();
    for (int i = n - 1; i >= 0; i--) {
        if (binary[i] == '0') {
            binary[i] = '1';
            break;
        } else {
            binary[i] = '0';  
        }
    }
    return binary;
}

int main() {
    string binary;

   
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    cout << "The original binary = " << binary << endl;

    string onesComp = onesComplement(binary);
    cout << "After ones complement the value = " << onesComp << endl;

    string twosComp = twosComplement(onesComp);
    cout << "After twos complement the value = " << twosComp << endl;

    return 0;
}
