#include <iostream>
using namespace std;

void reverseString(string &str, int index) {
    
    if (index >= str.length() / 2)
        return;

    swap(str[index], str[str.length() - index - 1]);

    reverseString(str, index + 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverseString(str, 0);

    cout << "Reversed string: " << str << endl;

    return 0;
}
