
#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}
int countDays(int year, int month, int day) {
    int totalDays = 0;
    for (int y = 1; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += daysInMonth(year, m);
    }
    totalDays += day;
    return totalDays;
}
int daysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2) {
    int days1 = countDays(year1, month1, day1);
    int days2 = countDays(year2, month2, day2);
    return abs(days1 - days2);
}
int main() {
    int year1, month1, day1;
    int year2, month2, day2;
    cout << "Enter the first date (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;
    cout << "Enter the second date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;
    int daysDifference = daysBetweenDates(year1, month1, day1, year2, month2, day2);
    cout << "Days between " << year1 << "/" << month1 << "/" << day1 << " and "
         << year2 << "/" << month2 << "/" << day2 << " = " << daysDifference << endl;
    return 0;
}