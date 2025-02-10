/* Write a C++ program to implement a class called Date That has private variable for day,
month and year. Include member functions to set and get these variables as well as to validate if the ate is valid.*/
#include<iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool validDateDay(int);
    bool validDateMonth(int);
    bool validDateYear(int);
    bool isLeapYear(int);

public:
    void set_date();
    void get_date();
};

bool Date::validDateDay(int aday) {
    int maxDay;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDay = 30;
    } else if (month == 2 && isLeapYear(year)) {
        maxDay = 29;
    } else if (month == 2 && !isLeapYear(year)) {
        maxDay = 28;
    } else {
        maxDay = 31;
    }

    if (aday >= 1 && aday <= maxDay) {
        return true;
    }
    return false; // Invalid day
}

bool Date::validDateMonth(int m) {
    if (m >= 1 && m <= 12) {
        return true;
    }
    return false; // Invalid month
}

bool Date::isLeapYear(int y) {
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

bool Date::validDateYear(int y) {
    if (y >= 1 && y <= 99999) {
        return true;
    }
    return false; // Invalid year
}

void Date::set_date() {
    cout << "Enter the date (day month year): ";
    cin >> day >> month >> year;

    // Validate the inputs
    while (!validDateMonth(month)) {
        cout << "Invalid month! Please enter a valid month (1-12): ";
        cin >> month;
    }

    while (!validDateYear(year)) {
        cout << "Invalid year! Please enter a valid year: ";
        cin >> year;
    }

    while (!validDateDay(day)) {
        cout << "Invalid day! Please enter a valid day for the given month: ";
        cin >> day;
    }
}

void Date::get_date() {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

int main() {
    Date d1;
    d1.set_date();
    d1.get_date();
    return 0;
}

