#include <iostream>
using namespace std;

class parent1
{
public:
    parent1()
    {
        cout << "Parent class" << endl;
    }
};

class parent2
{
public:
    parent2()
    {
        cout << "Parent2 class" << endl;
    }
};

class child : public parent1,public parent2 // multiple heritance
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

//---------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    grandchild c;

    return 0;
}