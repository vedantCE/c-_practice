#include<iostream>
using namespace std;
int main()
{
    //user pase thi koi intger laia
    int n;
    cout<<"Enter number between :";
    cin>>n;
    int ans=0;
    int power=1;

while(n>0)
{
int parityDigit=n%2;
//ans=ans+lastDigit*2*power// aavu karia to last digit 2 thi gunay
ans+=parityDigit*power;
power*=10;
n/=2;
}
cout<<"the binary number is:"<<ans;

     return 0;
}