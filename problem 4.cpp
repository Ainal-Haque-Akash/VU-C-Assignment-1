/* Write a C++ program to create a class called Car that has private member variable for company,
model and year. Implement member function to get and set these variables.*/
#include<iostream>
using namespace std;
class car
{
private:
    char name[50];
    char model[50];
    int year;
public:
    set_value()
    {
        cout<<"Name: ";
        cin.getline(name,50);
        cout<<"Model: ";
        cin.getline(model,50);
        cout<<"Year: ";
        cin>>year;
        cin.ignore();
    }
    void get_value()
    {

        cout<<"NAME: "<<name<<endl<<"MODEL: "<<model<<endl<<"YEAR: "<<year<<endl;
    }
};
int main()
{
    car c1,c2,c3;

    c1.set_value();
    c2.set_value();
    c3.set_value();
    cout<<"......The info model......"<<endl;
    c1.get_value();
    c2.get_value();
    c3.get_value();
    return 0;
}
