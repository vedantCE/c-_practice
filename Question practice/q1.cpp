// Create a class MASS having data members: float kg, grams. A member function
// should enter their values and another member function print their values in kg and
// gram. Function should add two objects of type MASS passed as arguments such that
// it supports M3.add (M1, M2). Here M1, M2 and M3 are objects of class MASS. Write
// a main() program to test all the functions. Validate your answer in function adding
// weights if grams >1000.

#include<iostream>
using namespace std;
 
class MASS
{
    float kg,grams;

    public:

    void getvalue(float a,float b)
    {
          kg=a;
          grams=b;
    }

    void printvalue()
    {
         cout<<kg<<"."<<grams<<endl;
    }
};
 
int main()
{
 
 
return 0;
}