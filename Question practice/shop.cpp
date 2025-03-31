#include <iostream>
using namespace std;

class shop
{
    int itemId[100]; // ek shop ma 100 item hoy shake
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice();
    void displayPrice();
};
void shop ::setPrice()
{
    cin >> itemId[counter] >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[counter] << " " << itemPrice[counter] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}