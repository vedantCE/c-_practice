#include<iostream>
using namespace std;
 
class equilateralTriangle
{
     float a,circumference,area;

     public:

     void setA(float length)
     {
      a=length;
      circumference=3*a;
      area=(1.73*a*a)/4;
     }

     // friend function declaration inside the class;
      friend void printAnswer(equilateralTriangle);

   
};
     // friend function defination outside the class

     void printAnswer(equilateralTriangle o1)
     {
      cout<<"circumference="<<o1.circumference<<endl<<"area="<<o1.area<<endl;
     }

 
int main()
{
  equilateralTriangle o2;
  o2.setA(17);
  printAnswer(o2);
 
return 0;
}