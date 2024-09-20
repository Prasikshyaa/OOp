
#include <iostream>
using namespace std;
int main(){

    int num1, num2, sum, digits = 0;

    cout<< "enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
     
     sum= num1 +num2;
     int temp=sum;
     do{
        digits++;
        temp /=10;
     }
     while(temp!=0);
     std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The number of digits in the sum is: " << digits << std::endl;


     return 0;

}