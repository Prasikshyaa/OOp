#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    // Input the string
    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string using a loop
    int length = str.length();
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
    return 0;
}
