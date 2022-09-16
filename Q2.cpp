#include<iostream>
using namespace std;
class Time
{
  private:
    int hour;
    int minute;
    int second;

  public:
      void set(int h, int m, int s)
      {
          hour=h;
          minute=m;
          second=s;
      }

      void showData()
      {
         cout<<hour<<"hr "<<minute<<"min "<<second<<"sec "<<endl;
      }

};
int main()
{
    Time t1;
    t1.set(3,45,20);

    t1.showData();

    return 0;
}

