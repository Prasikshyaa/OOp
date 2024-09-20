//Write a C++ program to compute the number of days in a month for a given year and month.

#include <iostream>

int main() {
    int year, month, days;

 
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    
    if (month == 2) {  
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;  
        } else {
            days = 28;  
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    } else {
        days = 31;  
    }

    
    std::cout << "Number of days in year " << year << " and month " << month << " is: " << days << std::endl;

    return 0;
}
