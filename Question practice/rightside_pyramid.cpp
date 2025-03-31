#include<iostream>
using namespace std;

int main() {
    int n,i,j,k;
   cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) // for space
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++) // for syar
        {
            cout<<"*";
        }
        printf("\n");

    }
    return 0;
}