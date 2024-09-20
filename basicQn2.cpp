#include <iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<< "Enter 1st number: ";
    cin>> num1;

    cout<< "Enter 2nd number: ";
    cin>> num2;

    //swapping the values
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"After swapping first number is: "<<num1 <<endl;
     cout<<"After swapping second number is: "<<num2 <<endl;


    return 0;
}