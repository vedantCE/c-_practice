#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,8,5,4,9,4,7};
    sort(arr,arr+9);

    // For each loop
    for(int element:arr)
    {
        cout<<element;
    }
    return 0;
}