#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
 
    if (n == 0)
        return 0;
    
    
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;

 
    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int* arr = new int[n];
 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = sumArray(arr, n);
    cout << "The sum of all elements in the array is: " << sum << endl;

    delete[] arr;

    return 0;
}
