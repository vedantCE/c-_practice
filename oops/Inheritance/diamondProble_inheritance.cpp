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

class parent2
{
public:
    parent2()
    {
        cout << "Parent2 class" << endl;
    }
};
 // hierarchical inheritance
class child1 : public parent
{
public:
    child1()
    {
        cout << "Child class" << endl;
    }
};

class child2 : public parent
{
public:
    child2()
    {
        cout << "Child class" << endl;
    }
};

class grandchild : public child1,public child2
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

   // be vaar parent class constructor call tahse

    return 0;
}