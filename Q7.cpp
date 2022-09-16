//Define a class Greatest and define instance member function to find Largest among 3 numbers using classes
#include<iostream>
using namespace std;
class Greatest
{
    private:

    int a,b,c;
    int largest;

    public:

      void setNo(int x, int y, int z)
      {
       a=x;
       b=y;
       c=z;
      }
      int get1()
      {
         return a;
      }
      int get2()
      {
         return b;
      }
      int get3()
      {
         return c;
      }
      int get_largest()
      {
         return largest;
      }
      void cal_largest()
      {
          if(a>=b && a>=c)
          {
              largest=a;
          }
          if(b>=a && b>=c)
             {
                 largest=b;
             }

          if(c>=a && c>=b)
          {
            largest=c;
          }
      }
};
int main()
{
   Greatest g1;
   g1.setNo(9,16,5);
   g1.cal_largest();
   cout<<"Largest among 3 numbers "<<g1.get1()<<" "<<g1.get2()<<" "<<g1.get3()<<" is "<<g1.get_largest();
   cout<<endl;

   return 0;
}
