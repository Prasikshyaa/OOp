#include <iostream>
using namespace std;

int main() {
    int n;
    int term = 1, sum = 0;

    cout << "Input number of terms: ";
    cin >> n;

    cout << "Series: ";

   
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i != n) {
            cout << " + ";
        }
        sum += term;
        term = term * 10 + 1; 
    }

  
    cout << endl;
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
