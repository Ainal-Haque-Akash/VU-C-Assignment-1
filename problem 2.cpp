/* Write a C++ program t create a class called Rectangle that has private member variable for
length and width. Implement member functions to calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class rectangle
{
private:
    double length;
    double width;
    double area;
    double perimeter;
public:
    get_value()
    {
        cout<<"Enter the length for the Rectangle: ";
        cin>>length;
        cout<<"Enter the width for the Rectangle: ";
        cin>>width;
    }
    void calculate()
    {
        area=length*width;
        perimeter=(length+width)*2;
    }
    void display()
    {
        cout<<"area: "<<area<<endl<<"perimeter: "<<perimeter<<endl;
    }
};
int main()
{
    rectangle re1,re2,re3;

    re1.get_value();
    re1.calculate();
    re1.display();

    re2.get_value();
    re2.calculate();
    re2.display();

    re3.get_value();
    re3.calculate();
    re3.display();
    return 0;
}
