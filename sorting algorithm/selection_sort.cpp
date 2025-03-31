#include<iostream>
#include<vector>
using namespace std;

// Selection sort Algorithm
 void SelectionSort(vector<int> &v)
 {
     int n=v.size();
     for(int i=0;i<n-1;i++)
     {
        // Finding minimum element in unsorted array
        int minElementIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[minElementIndex])
            {
                minElementIndex=j;
            }
        }
        // Placing minimum element at beginning
        if(minElementIndex!=i)
        {
            swap(v[i],v[minElementIndex]);
        }
     }
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

    SelectionSort(v);

 for(int i=0;i<size;i++)
    {
       cout<<v[i]<<" ";
    }



    return 0;
}