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

class grandchild : public child
{
public:
    grandchild()
    {
        cout << "Grand child" << endl;
    }
};

//--------------------------- ------------------------------------------------------------------------------------------------------------
int main()
{
    grandchild c;

    return 0;
}