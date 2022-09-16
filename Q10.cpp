//Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;
class Area
{
    private:
       float l,b, side,r;
       float area;
    public:
        void setSide(int a)
        {
            side=a;
        }
        void setlb(float L,float B)
        {
            l=L;
            b=B;
        }
        void setRadius(int R)
        {
            r=R;
        }
        float getSide()
        {
            return side;
        }
        float getLen()
        {
            return l;
        }
        float getBre()
        {
            return b;
        }
        float getCircle()
        {
            return r;
        }
        float areaOfSquare()
        {
            return side*side;
        }
        float areaOfRectangle()
        {
            return l*b;
        }
        float areaOfCircle()
        {
            return 3.14*r*r;
        }
};
int main()
{
    Area a1;
    a1.setSide(4);
    a1.setlb(2,2);
    a1.setRadius(2);
    cout<<"Area of circle of radius "<<a1.getCircle()<<" is "<<a1.areaOfCircle()<<endl;
    cout<<"Area of Rectangle of length "<<a1.getLen()<<" and "<<"Breadth "<<a1.getBre()<<" is "<<a1.areaOfRectangle()<<endl;
    cout<<"Area of Square of side "<<a1.getSide()<<" is "<<a1.areaOfSquare()<<endl;
    cout<<endl;

    return 0;
}
