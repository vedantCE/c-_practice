#include <iostream>
using namespace std;

class fruit
{
public:
    string name;
    string color;
};

int main()
{
    // Method-1
    fruit apple; // Creat object of type fruit
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " - " << apple.color << endl;

    // Method-2
    fruit *mango = new fruit(); // Create object of type fruit using new keyword
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << " - " << mango->color << endl;
}