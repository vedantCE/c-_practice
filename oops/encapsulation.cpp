#include<iostream>
using namespace std;
class ABC
{
    int x;
    public:
    void set(int n)
    {
        x=n;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    ABC object1;
    // object1.x direct hu x ni value acess no karishaku karnke x privet che aavu karva mare get and set 
    // namna function no upyog karvo pade 
    object1.set(3); // value pass kari through set aapde
    cout<<object1.get()<<endl;  // value pass kareli melvva

    return 0;
}