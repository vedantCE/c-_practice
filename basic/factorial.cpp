#include<iostream>
using namespace std;
void factorial(int n)
{
    int ans=1;
    for(int i=n;i>=1;i--)
    {
         ans=i*ans;
    }
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
}