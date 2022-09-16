//Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex number
#include<iostream>
using namespace std;
class Complex
{
  private:
    int real;
    int img;

  public:
      void set(int r, int i)
      {
          real=r;
          img=i;
      }

      void showData()
      {
         cout<<real<<" + "<<img<<"i"<<endl;
      }

};
int main()
{
    Complex c1,c2;
    c1.set(3,2);
    c2.set(5,3);

    c1.showData();
    c2.showData();

    return 0;
}
