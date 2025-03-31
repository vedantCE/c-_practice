// #include<stdio.h>
// int main() {
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=5-i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
       
       int n;
       cin>>n;
       int noOfSpace=0;
       for(int i=1;i<=n;i++)
       {
        for(int j=1;j<=n-i;j++)
        {
                    cout<<"*";
        }
        cout<<endl;
       }
       return 0;
}
       
       