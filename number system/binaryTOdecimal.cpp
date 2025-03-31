#include<iostream>
using namespace std;
int main()
{
    //user pase thi koi intger laia
    int n;
    cout<<"Enter number between 0-1:";
    cin>>n;
    int ans=0;
    int power=1;

while(n>0)
{
int lastDigit=n%10;
//ans=ans+lastDigit*2*power// aavu karia to last digit 2 thi gunay
ans+=lastDigit*power;
power*=2;
n/=10;
}
cout<<"the decimal number is:"<<ans;

     
}