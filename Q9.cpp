//Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;
class Circle
{
    private:
       float r;
       float area;
    public:
       void setArea(float x)
       {
           r=x;
       }
       float getRadius()
       {
           return r;
       }
       float getArea()
       {
           return area;
       }
       void cal_circle()
       {
           area=3.14*r*r;
       }
};
int main()
{
    Circle c1;
    c1.setArea(2.4);
    c1.cal_circle();
    cout<<"Area of circle "<<c1.getRadius()<<" is "<<c1.getArea();
    cout<<endl;

    return 0;
}
