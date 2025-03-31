#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int i,int j)
{
    return (i>j);
}
int main()
{
    int arr[]={1,2,3,8,5,4,9,4,7};
    sort(arr,arr+9,compare);

    // For each loop
    for(int element:arr)
    {
        cout<<element<<" ";
    }
    return 0;
}