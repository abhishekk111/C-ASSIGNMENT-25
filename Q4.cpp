//Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class
#include<iostream>
using namespace std;
class LargestNumber
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
   LargestNumber l1;
   l1.setNo(9,4,5);
   l1.cal_largest();
   cout<<"Largest number of "<<l1.get1()<<" "<<l1.get2()<<" "<<l1.get3()<<" is "<<l1.get_largest();
   cout<<endl;

   return 0;
}

