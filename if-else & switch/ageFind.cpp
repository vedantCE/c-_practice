#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age:";
    cin>>age;

    if(age>18)
    {
        cout<<"adult";
    }
    else if(age<=18 && age>=12)
    {
        cout<<"teenager";
    }
    else{
        cout<<"child";
    }

}
