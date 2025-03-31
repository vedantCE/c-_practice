#include<iostream>
using namespace  std;
int main()
{
    int array[7]={2,3,1,3,2,4,1};
    int unique=0;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++){
            if(array[i]==array[j])
            {
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        if(array[i]>0)
        {
            unique=array[i];
        }
    }
    cout<<"Your unique number is:"<<unique<<endl;
}