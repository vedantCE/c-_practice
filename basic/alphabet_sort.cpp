#include<iostream>
#include<algorithm>
#include<string.h>  
using namespace std;

void SelectionSort(char fruit[][60],int n)
{
    for(int i=0;i<n-1;i++)
    {
        // Finding the minimum element
        int minElementIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(fruit[minElementIndex],fruit[j])>0)
            {
                minElementIndex=j;
            }
        }
        //Place the min element at the beginning
        if(i!=minElementIndex){
        swap(fruit[i],fruit[minElementIndex]);
        }
    }
}
int main()
{
     char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    

    int n=sizeof(fruit)/sizeof(fruit[0]);
    SelectionSort(fruit,n);

    for(int i=0;i<n;i++)
    {
        cout<<fruit[i]<<endl;
    }   

    return 0;
}