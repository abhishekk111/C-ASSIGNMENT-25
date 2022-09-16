//Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    private:
       float a;
       float b;
       float area;
    public:
       void setArea(float x, float y)
       {
           a=x;
           b=y;
       }
       float getWidth()
       {
           return a;
       }
       float getHeight()
       {
           return b;
       }
       float getArea()
       {
           return area;
       }
       void cal_Rectangle()
       {
           area=a*b;
       }
};
int main()
{
    Rectangle r1;
    r1.setArea(2.3,5.5);
    r1.cal_Rectangle();
    cout<<"Area of Rectangle "<<r1.getWidth()<<" and "<<r1.getHeight()<<" is "<<r1.getArea();
    cout<<endl;

    return 0;
}

