/* Write a C++ program to create a class called Person that has private member variables for name,
age and country. Implement member functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class person
{
private:
    char name[50];
    int age;
    char country[50];
public:
    set_value()
    {
        cout<<"Name: ";
        cin.getline(name,50);
        cout<<"Age: ";
        cin>>age;
        cin.ignore();
        cout<<"Counter: ";
        cin.getline(country,50);

    }
    void get_value()
    {

        cout<<"NAME: "<<name<<endl<<"AGE: "<<age<<endl<<"COUNTRY: "<<country<<endl;
    }
};
int main()
{
    person p1,p2,p3;

    p1.set_value();
    p2.set_value();
    p3.set_value();
    cout<<"......The info you wanted......"<<endl;
    p1.get_value();
    p2.get_value();
    p3.get_value();
    return 0;
}
