#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};

   //size of array
    cout<<sizeof(arr)<<endl;

    //length of array
   // cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    int size=sizeof(arr)/sizeof(arr[0]);

  // For loop
    for(int i=0;i<size;i++)
    {
         cout<<arr[i]<<endl;           
    }

//For each loop
for(int element:arr)
{
    cout<<element<<endl; 
}

//While loop
int i=0;
while(i<size)
{
    cout<<arr[i]<<endl;
    i++;
}
return 0;

}