// Create a class Book which has data members b_code, Title and Price of the book.
// Define member function get() to get the data and show() to print the data. Write a
// program for 10 Book class object which get and print the details of the all created
// objects and test the functionalities inside main().

#include<iostream>
using namespace std;
 
class Book{
 int b_code,price;
 string Title;
 
 public:

 void get()
 {
     cin>>price>>Title>>b_code;
 }

 void show()
 {
     cout<<price<<" "<<Title<<" "<<b_code<<endl;
 }
};
 
int main()
{
 Book book[10];

 for(int i=0;i<10;i++)
 {
    book[i].get();
 }

 for(int i=0;i<10;i++)
 {
    book[i].show();
 }

 
return 0;
}