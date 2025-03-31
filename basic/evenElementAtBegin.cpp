#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v)
{
    int leftPtr=0;
    int rightPtr=v.size()-1;

    while(leftPtr<rightPtr)
    {
        if(v[leftPtr]%2==1 && v[rightPtr]%2==0)
        {
            
            int temp=v[leftPtr];
            v[leftPtr]=v[rightPtr];
            v[rightPtr]=temp;
        }
        if(v[leftPtr]%2==0)
        {
            leftPtr++;
        }
        if(v[rightPtr]%2==1)
        {
            rightPtr--;
        }
        
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    sortZeroesAndOnes(v);
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
    return 0;
}