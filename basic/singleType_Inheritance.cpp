#include <iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout << "Parent class" << endl;
    }
};

class child : public parent
{
public:
    child()
    {
        cout << "Child class" << endl;
    }
};
int main()
{
    child c;
    
    return 0;
}