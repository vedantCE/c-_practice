#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int j,i,element;
    vector<int> v;
    
    while(cin>>element)
    {
        v.push_back(element);
    }
    for(int element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
cout<<v.size();
    return 0;
   
}