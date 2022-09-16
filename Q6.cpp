//Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
  private:
    int x1;
    int x2;
    static int count;

  public:
      void setx1(int a)
      {
          x1=a;
      }
      int getx1()
      {
          return x1;
      }

      int getx2()
      {
          return x2;
      }

      void cal_Square()
      {
         x2=x1*x1;
      }
      static void setcount(int z)
      {
          count=z;
      }
      static int getcount()
      {
          int i;
          for(i=0;i<=count;i++)
          {
              count++;
          }
          return count;
      }
};
int Square::count=0;

int main()
{
    Square s1;
    s1.setx1(5);

    s1.cal_Square();
    //Square::setcount(x2);
    cout<<"Square of "<<s1.getx1()<<" is "<<s1.getx2();
    cout<<endl;
    //cout<<Square::getcount();


    return 0;
}
