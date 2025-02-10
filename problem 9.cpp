/* Write a C++ program to implement a class called Student that has private member variables for name, class,
roll number and marks. Include member functions to calculate the grade based on the marks and display the student's information.*/
#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    string Class;
    int roll_number;
    float marks;

public:
    void set_value()
    {
        cout << "Enter the student INFO: " << endl;
        cout << "NAME: ";
        cin.ignore();
        getline(cin,name);
        cout << "CLASS: ";
        getline(cin,Class);
        cout << "ROLL NUMBER: ";
        cin >> roll_number;
        cout << "MARKS: ";
        cin >> marks;
    }
    char calculate_grade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else if (marks >= 35)
            return 'D';
        else
            return 'F';
    }
    void display_info()
    {
        char grade = calculate_grade();
        cout << "\nStudent Information:" << endl;
        cout << "NAME: " << name << endl;
        cout << "CLASS: " << Class << endl;
        cout << "ROLL NUMBER: " << roll_number << endl;
        cout << "MARKS: " << marks << endl;
        cout << "GRADE: " << grade << endl;
    }
};

int main()
{
    Student s1;
    s1.set_value();
    s1.display_info();

    return 0;
}
