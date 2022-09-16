//Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include<iostream>
using namespace std;
class ReverseNumber
{
    private:

    int actualNumber;
    int reverseNumber;

    public:

      void setActualNumber(int n)
      {
       actualNumber=n;
      }

      int getActualNumber()
      {
         return actualNumber;
      }
      int getReverseNumber()
      {
          return reverseNumber;
      }
      void cal_reverseNumber()
      {
          int rem,rev=0;
           while (actualNumber != 0)
                {
                    rem = actualNumber % 10;
           rev = rev * 10 + rem;
           actualNumber /= 10;
                }
                reverseNumber=rev;
      }

};
int main()
{
   ReverseNumber r1;
   r1.setActualNumber(12345);
   r1.cal_reverseNumber();
   cout<<"Reverse of "<<r1.getActualNumber()<<" is "<<r1.getReverseNumber();
   cout<<endl;

   return 0;
}
