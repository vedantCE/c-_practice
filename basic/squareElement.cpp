#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void sortedSquareArray(vector<int> &v)
{
      vector<int> ans; //Sorted value store karva

      int leftPtr=0,rightPtr=v.size()-1;

      while(leftPtr<=rightPtr)
      {
        if(abs(v[leftPtr])<abs(v[rightPtr]))
        {
            ans.push_back(v[rightPtr]*v[rightPtr]);
            rightPtr--;
        }
        else{
            ans.push_back(v[leftPtr]*v[leftPtr]);
            leftPtr++;
        }
      }
      for(int i=0;i<v.size();i++)
      {
        cout<<ans[i]<<" ";
      }
}
int main()
{
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++)
{
    int ele;
    cin>>ele;
    v.push_back(ele);
}

sortedSquareArray(v);

    return 0;
}