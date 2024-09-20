
#include <iostream>
using namespace std;
int main(){
    int n, num;
    int first = 0, second = 0, third = 0;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the numbers: ";

    for(int i = 0; i<n; i++)
    {
        cin>>num;
        if(num>first){
            third = second;
            second = first;
            first = num;
        }
        else if(num>second){
            third= second;
            second= num;
        }
        else if(num> third)
        {
            third = num;
        }
    }
    cout << "The three highest numbers are: " << first << " " << second << " " << third << std::endl;
    return 0;


}