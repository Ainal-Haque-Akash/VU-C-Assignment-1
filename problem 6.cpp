/* write a C++ program to create a class called Triangle that has private member variables for lengths of it's three sides.
 Implement member functions to determine if the triangle is equilateral, isosceles or scalene.*/
#include<iostream>
using namespace std;
class triangle
{
private:
    double length1;
    double length2;
    double length3;
public:
    void set_value()
    {
        cout<<"Give the lengths for the triangle: ";
        cin>>length1 >>length2 >>length3;
    }
    void eualifications()
    {
        if(length1==length2&& length2==length3)
        {
            cout<<"The Triangle is Equilateral";
        }

        else if(length1==length2 || length1==length3 || length2==length3)
        {
            cout<<"The Triangle is Isosceles";
        }

        else if(length1!= length2 && length1!= length3&& length3!= length2)
        {
            cout<<"The Triangle is Scalene";
        }

        else
        {
            cout<<"invalid input";
        }
    }
};
int main()
{
    triangle tri1;
    tri1.set_value();
    tri1.eualifications();
    return 0;
}
