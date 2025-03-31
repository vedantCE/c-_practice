#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int> &v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int currentElement=v[i];

        // Find correct position for our current element
        int j=i-1;
        while(j>=0 && v[j]>currentElement)
        {
            v[j+1]=v[j];
            j--;
        }

        // Insert currrnt element
        v[j+1]=currentElement;
    
    }
    return;
}
int main()
{
    int size;
    cin>>size;

    vector<int>v(size);

    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }

    InsertionSort(v);

     for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}