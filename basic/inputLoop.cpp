#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};

    int size=sizeof(arr)/sizeof(arr[0]);

  // For loop
    for(int i=0;i<size;i++)
    {
         cin>>arr[i];           
    }

//For each loop
for(int element:arr)
{
    cin>>element; 
}

//While loop
int i=0;
while(i<size)
{
    cin>>arr[i];
    i++;
}
return 0;

}