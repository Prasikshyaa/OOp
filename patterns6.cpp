#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num;  
            num = 1 - num;  
        }
        cout << endl;  
    }

    return 0;
}
