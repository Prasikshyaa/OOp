#include <iostream>
using namespace std;

int main() {
    int start, n, diff, sum = 0, term;

    cout << "Enter the starting number of the A.P. series: ";
    cin >> start;

    cout << "Enter the number of items for the A.P. series: ";
    cin >> n;

    cout << "Enter the common difference of the A.P. series: ";
    cin >> diff;

    cout << "The Sum of the A.P. series are: " << endl;
    for (int i = 0; i < n; i++) {
        term = start + i * diff;  
        cout << term;            
        sum += term;              
        if (i < n - 1) {
            cout << " + ";        
        }
    }
    
    cout << " = " << sum << endl;

    return 0;
}
