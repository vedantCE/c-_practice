#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int j,i,element;
    vector<int> v;
    
    // In for loop talking input and print output
    for(i=0;i<5;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    cout<<"Your vector size is:"<<v.size()<<endl;

// using for loop for print is not good idea for print use foreach loop
    for(j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<endl;

    // For each loop
    //for(datatype variable : array or vector name)
    for(int element:v)
    {
        cout<<element<<" " ;
    }

    return 0;
   
}