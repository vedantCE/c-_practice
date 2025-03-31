#include<iostream>
using namespace std;

class Rectangle
{
 public:
 int length;
 int bredth;

 Rectangle() // Default constructor-> It is a constructor with no arguments
 {
    length=0;
    bredth=0;
 }
 Rectangle(int a,int b) // Parameterized constructor-> It is a constructor with arguments
 {
    length=a;
    bredth=b;
 }

 Rectangle(Rectangle& r) // copy constructor-> initialize an object using another existing object of the same class
 {
    length=r.length;
    bredth=r.bredth;
 }
 
 ~Rectangle() // destructor-> It is a special member function of a class that is executed whenever an object of it is destroyed
 {
    cout<<"Destructor is called"<<endl;
 }
  
 
};
int main()
{
    Rectangle *r1= new Rectangle(); 
    cout<<r1->length<<endl; // 0  
    cout<<r1->bredth<<endl; // 0  
    //delete r1; // Destructor is called

    Rectangle r2(10,5);
    cout<<r2.length<<endl; // 10
    cout<<r2.bredth<<endl; // 5 

    Rectangle r3=r2;
    cout<<r3.length<<endl; // 10
    cout<<r3.bredth<<endl; // 5
    return 0;
}