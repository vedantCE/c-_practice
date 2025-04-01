/*
---------------------------------
  Devloper: Vedant Bhatt
  Topic:Inheritance
  Created:31-03-2025
----------------------------------
 */

#include<iostream>
using namespace std;

// Base class
class Employee
{
   

    public:
    float salary;
    int id;
    Employee(int inpId)
    {
      id=inpId;
      salary=34.00;  
    }
    Employee(){}

};

// Derived class

class Programer : Employee
{
  public:
  int languageCode=9;

  Programer(int inpid)
  {
    id=inpid;
  }
 
};

 
int main()
{
 Employee vedant(1),harsh(2);
 cout<<vedant.salary<<endl;
 cout<<harsh.salary<<endl;

 Programer SkillV(5);
 
return 0;
}