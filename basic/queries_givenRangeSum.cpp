#include<iostream>
using namespace std;

// index -> 0 1 2 3 4 5 6
// array -> 0 x1 x2

// 0 based indexing -> 0 ..... n-1
// 1 based indexing -> 1 ..... n

// Dry Run
// 0 5 1 2 3 4
// 0 5 6 8 11 15 ->prifixSum Array
// l=1, r=3
// ans = arr[3]-arr[1-1] = 8-0 = 8

int main()
{
   int n;
   cin>>n;
   int arr[n+1]={0};
for(int i=1;i<=n;i++)
{
     cin>>arr[i];
}
// calculate prefixSum array 
for(int i=1;i<=n;i++)
{
     arr[i]=arr[i]+arr[i-1];
}
 int queries;
 cin>>queries;

 while(queries--)
 {
    int l,r;
    cin>>l>>r;
    int ans=0;
    //ans==prifixSum[r]-prifixSum[l-1]
    ans = arr[r]-arr[l-1];
    cout<<ans<<"\n";
 }








    return 0;
}