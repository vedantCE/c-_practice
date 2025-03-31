// Function over riding tyre thay jyare child class ne parent class na function tarike define karvama aave

#include<iostream>
using namespace std;

class parent
{
public:
        virtual void print()
       {
        cout<<"parent class"<<endl;
       }
       void show()
       {
        cout<<"parent class"<<endl;
       }


};

class child: public parent{
    void print()
       {
        cout<<"child class"<<endl;
       }
       void show()
       {
        cout<<"child class"<<endl;
       }

};


int main()
{
    parent *p;
    child c;

    p=&c;  // runtime vakhte me mara object variable overridide karididho
    p->print(); //p.print pan lakhay
    p->show();  // p.show pan  lakhay
  
/*output
child class
parent class*/

// show function mate over riding nahi thay ani mate virtual keyword usie karvo pade

}