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
    int id;

    public:
    float salary;

    Employee(int inpId)
    {
      id=inpId;
      salary=34.00;  
    }

};

// Derived class

//class 

 
int main()
{
 Employee vedant(1),harsh(2);
 cout<<vedant.salary;
 cout<<harsh.salary;
 
return 0;
}