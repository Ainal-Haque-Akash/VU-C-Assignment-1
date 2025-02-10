/* Write a program to implement a class called Circle that has private member variables for radius.
include member functions to calculate the circle's area and circumference.*/
#include<iostream>
using namespace std;
class circle
{
private:
    double radius;
    double area;
    double circumference;
public:
    take_radius()
    {
        cout<<"Enter the radius for the circle: ";
        cin>>radius;
    }
    void calculate()
    {
        area=3.1416*radius*radius;
        circumference=2*3.1416*radius;
    }
    void display()
    {
        cout<<"area= "<<area<<endl<<"circumference= "<<circumference<<endl;
    }
};
int main()
{
    circle cir1,cir2,cir3;

    cir1.take_radius();
    cir1.calculate();
    cir1.display();

    cir2.take_radius();
    cir2.calculate();
    cir2.display();

    cir3.take_radius();
    cir3.calculate();
    cir3.display();
    return 0;
}
