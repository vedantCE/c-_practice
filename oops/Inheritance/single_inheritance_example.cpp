#include<iostream>
using namespace std;
class Human
 { 
    protected:
    string name;
    int age;

    public:
    Human(string name,int age)
     {
        this->name=name;
        this->age=age;
     }
    void work()
    {
        cout<<"I am working"<<endl;
    }


 };

 class Student : public Human
 {
     
     int rollNumber;
     int  fees;

     public:
/* Aapde constructor ma pan kari shakia*/
     Student(string name,int age,int rollNumber,int fees):Human(name,age)
     {
        this->rollNumber=rollNumber;
        this->fees=fees;
     }
     
    void display()
    {
        cout<<name<<" "<<age<<" "<<rollNumber<<" "<<fees<<endl;
    }
 };
 
int main()
{
 Student A1("vedant",26,32,99);
 A1.work();
 A1.display();
  /* A1 a student class no object hato pan Human class na function ne access kari shake che 
  j darshave che inheritance */
 
return 0;
}