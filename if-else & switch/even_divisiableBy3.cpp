#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter number:";
    cin>>number;

    if((number%2 == 0) && (number%3==0))
    {
        cout<<"Number is evenand divisiable by3:"<<number;
    }
    else
    {
        cout<<"Number is not  even";
    }
}
