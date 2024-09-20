#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    
    cout << "Input an 8-bit binary value: ";
    cin >> binary;
    
    cout << "The original binary = " << binary << endl;
    
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            cout << "Invalid binary input!" << endl;
            return 1;
        }
    }
   
    cout << "After ones complement the number = " << binary << endl;

    return 0;
}
