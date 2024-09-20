#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, swappedNumber, numDigits, middlePart;

  
    cout << "Enter any number: ";
    cin >> number;

    lastDigit = number % 10;

    numDigits = log10(number);

    firstDigit = number / pow(10, numDigits);

    middlePart = (number % static_cast<int>(pow(10, numDigits))) / 10;

    
    swappedNumber = lastDigit * pow(10, numDigits) + middlePart * 10 + firstDigit;

    cout << "The number after swapping the first and last digits is: " << swappedNumber << std::endl;

    return 0;
}
