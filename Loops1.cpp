#include <iostream>
using namespace std;

int main() {
    cout << "The perfect numbers between 1 to 500 are:" << endl;

    for (int num = 1; num <= 500; num++) {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
