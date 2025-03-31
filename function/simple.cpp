#include<iostream>
using namespace std;

void add(int x,int y)
{
    int ans=x+y;
    cout<<"The sum of two number is:"<<ans<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    add(x,y);
    return 0;
}