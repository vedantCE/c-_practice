#include<iostream>
using namespace std;

class Sum{
public:

 // jo be perameter to sum karo
void add(int x,int y)
{
    int sum=x+y;
    cout<<sum<<endl;
}

// jo three perameter to tena square no sum
void add(int x,int y,int z)
{
    int sum=(x*x)+(y*y)+(z*z);
    cout<<sum<<endl;
}

// jo argument type float hoy and no of argument three hoy to sum karo
void add(float x,float y,float z)
{
    float sum=x+y+z;
    cout<<sum<<endl;
}
};

//-------------------------------------------------------------------------------------------------------------

int main()
{
   Sum s;
   s.add(2,3);
   s.add(2,3,4);
   s.add(float(2.3),float(4.7),float(8.58));


    return 0;
}