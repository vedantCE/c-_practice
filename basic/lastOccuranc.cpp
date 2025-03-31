// Find last occuranc of x in given vector
// 1|2|3|2|1|3|1  
// ahiya x 0th 4th and 6th traney par che pan aapde lasr atle 6th lavvanu che

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int element,x,number;
    // Talking input
    while(cin>>element)
    {
        v.push_back(element);
    }
    cout<<endl;
    // Print output
    for(int element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;


 cout<<"Enter x:";
 cin.clear();
 cin.clear(); cin>>x;


cout<<"the size of enter vector is:"<<v.size()<<endl;
int position=0;
 for(int i=0;i<v.size();i++)
 {
    if(x==v[i])  position=i;
 }
 cout<<"the last occuranc of x in given vector is:"<<position<<endl;



}
