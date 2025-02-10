/* Write a C++ program to implement a class called Employee that has private member variables for
name, employee ID and salary. Include member functions to calculate and set salary based on employee performance.*/
#include<iostream>
using namespace std;
class employee
{
private:
    char name[50];
    int id;
    double salary;
public:
    void set_value()
    {
        cout<<"Employee name: ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"Employee ID: ";
        cin>>id;
        cout<<"Employee salary: ";
        cin>>salary;
        cout<<endl;
    }
    void calculate_salary(double performance)
    {
        if (performance>=4.2)
        {
            salary+=500;
        }
        else if (performance>=3)
        {
            salary+=150;
        }
        else if (performance>=2.2)
        {
            salary+=100;
        }
        else
        {
            cout<<"bad performance "<<"salary: "<<salary<<endl;
        }
        cout<<"Name: "<<name<<endl<<"update salary: "<<salary<<endl;
    }
};
int main()
{
    employee em1,em2;
    em1.set_value();
    em2.set_value();
    double performance;
    cout<<"enter performance rating for employee 1 (1 to 5): ";
    cin>>performance;
    cout<<endl;
    em1.calculate_salary(performance);

    cout<<"enter performance rating for employee 2 (1 to 5): ";
    cin>>performance;
    em2.calculate_salary(performance);

    return 0;
}
