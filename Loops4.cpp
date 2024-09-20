#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Input number of terms to display: ";
    cin >> n;

 
    cout << "Here is the Fibonacci series up to " << n << " terms:" << endl;

    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;  
        cout << nextTerm << " ";
        t1 = t2;  
        t2 = nextTerm;
    }
    
    cout << endl;

    return 0;
}
