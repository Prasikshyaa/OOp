#include <iostream>

using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << first << " "; 
        } else if (i == 2) {
            cout << second << " ";
        } else {
            next = first + second; 
            cout << next << " ";
            first = second;        
            second = next;
        }
    }

    cout << endl;
    return 0;
}