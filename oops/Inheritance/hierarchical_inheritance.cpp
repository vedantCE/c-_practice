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
 // hierarchical inheritance
class child1 : public parent1
{
public:
    child1()
    {
        cout << "Child class" << endl;
    }
};

class child2 : public parent1
{
public:
    child2()
    {
        cout << "Child class" << endl;
    }
};



//---------------------------------------------------------------------------------------------------------------------------------------
int main()
{
  

    return 0;
}