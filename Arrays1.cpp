#include <iostream>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array should have at least three elements." << endl;
        return;
    }

    int first = arr[0], second = arr[0], third = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The three largest elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, n);

    return 0;
}
