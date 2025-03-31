#include<iostream>
using namespace std;

class Complex
{
   int a,b;
  static  int count;
   public:

   Complex (int x,int y)
   {
    a=x;
    b=y;
   }

   Complex (int x)
   {
    a=x;
    b=0;
   }

   void PrintNumber()
   {
         cout<<"Your Number "<<count<< " is:"<< a << "+"<< b <<"i"<<endl;
         count++;
   }
};

int Complex::count=1;
 
 
int main()
{

 Complex c1(4,5); 
 c1.PrintNumber();

 Complex c2(6);
 c2.PrintNumber();


 
return 0;
}