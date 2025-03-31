#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public: 
    void read(void)
    {
        cout << "Enter a binary number:" << endl;
        cin >> s;
    }
    void checkBinary()
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary number" << endl;
               // aapdu function kai return nathi kartu to aapde  return 0; no lakhi shkia te ni badle
               exit(0);
            }
        }
    }
};

int main()
{
    binary b; // binary class no ek variable banvayo

    b.read();
    b.checkBinary();

    return 0;
}