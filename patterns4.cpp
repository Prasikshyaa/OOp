#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";  
        }

        for (int k = 1; k <= i; k++) {
            cout << "* ";  
        }

        cout << endl; 
    }

    return 0;
}
