#include<iostream>
using namespace std;

class complexNumber
{
     public: 
int real,img;

 complexNumber(int x, int y)
{
    real = x;
    img  = y;
}

// oveload operator mate aapde suthi pehla je return kare te batavshu(class nu name lakhvanu)
// pachi je operator use karia a mention karshu breaket ma aargument 

complexNumber operator+ (complexNumber &c) // &c object of class complexNumber
{
       complexNumber ans(0,0);
       ans.real=real+c.real;
       ans.img=img+c.img;
       return ans;
}
};

int main()
{
    complexNumber c1(1,2);
    complexNumber c2(1,3);

complexNumber c3=c1+c2;

 cout<<c3.real<<"+i"<<c3.img<<" ";

}