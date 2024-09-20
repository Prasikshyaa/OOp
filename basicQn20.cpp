#include <iostream>
using namespace std;

int main() {
    int decimal;
    char hexDigits[] = "0123456789ABCDEF";
    string hexadecimal = "";

  
    cout << "Input a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "The hexadecimal number is : 0" << endl;
        return 0;
    }

    int temp = decimal;
    while (temp > 0) {
        int remainder = temp % 16;  
        hexadecimal = hexDigits[remainder] + hexadecimal;  
        temp /= 16; 
    }

   
    cout << "The hexadecimal number is : " << hexadecimal << endl;

    return 0;
}
