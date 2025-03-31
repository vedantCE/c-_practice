// Quintal and metric ton are units for measuring heavy weights. (1 quintal = 100 kg, 1
//     metric ton = 10 quintal = 10 x 100 kg = 1000 kg). Create a class Metric_Ton having
//     two data members: int quintal and ton. Class also contains default constructor,
//     parametrized constructor and member function to print data. One-member function
//     should add two objects of type Metric_Ton such that it supports the statement
//     m1.add(m2) where m1 and m2 are objects of class Metric_Ton. Write a main()
//     program to test all the functions.


#include <iostream>
using namespace std;

class Metric_Ton {
    int quintal, ton;

public:
    Metric_Ton() {
        quintal = 0;
        ton = 0;
    }

    Metric_Ton(int a, int b) {
        quintal = a;
        ton = b;
    }

    void printdata() {
        cout << "Ton: " << ton << ", Quintal: " << quintal << endl;
    }

    void add(Metric_Ton m) {
        quintal += m.quintal;
        ton += m.ton;
        ton += quintal / 10;
        quintal = quintal % 10;
    }
};

int main() {
    Metric_Ton m1(10, 2);
    Metric_Ton m2(30, 4);
    Metric_Ton m3;

    cout << "M1: ";
    m1.printdata();
    cout << "M2: ";
    m2.printdata();
    cout << "M3: ";
    m3.printdata();
    
    m1.add(m2);
    cout << "M1 after adding M2: ";
    m1.printdata();

    return 0;
}

