#include <iostream>
#define max 50
using namespace std;

class cardetail
{
    string model, drivername;
    int regNumber;

public:
    void add()
    {
        cout << "Enter detail:";
        cin >> model >> drivername >> regNumber;
    }

    void update()
    {
        cout << "Enter new detail:";
        cin >> model >> drivername >> regNumber;
    }

    void display()
    {
        cout << "Car model:" << model<<endl << "Car driver name:" << drivername <<endl<< "Car reg.no.:" << regNumber << endl;
        cout<<"------------------------------------------------";
    }

    int search(int id)
    {
        return (id == regNumber);
    }
};

int main()
{
    cardetail car[max];
    int n = 0;
menu:
    cout << "1.add car" << endl
         << "2.update detail" << endl
         << "3.display detail" << endl;
    int choice1;
    cout << "Enter choice:";
    cin >> choice1;

    if (choice1 == 1)
    {
        if (n = 0)
        {
            car[0].add();
            n++;
        }
        else if (n < max)
        {
        add:
            car[n].add();
            n++;
            char choice2;
            cout << "Add new y or n:";
            cin >> choice2;
            if (choice2 == 'y')
            {
                goto add;
            }
            else
            {
                goto menu;
            }
        }
        else
        {
            cout << "Max limit";
        }
    }

    else if (choice1 == 2)
    {
        if (n == 0)
        {
            cout << "No update avaliable";
        }
        else
        {
            int id;
            cout << "enter ereg.no:";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (car[i].search(id))
                {
                    car[i].update();
                }
            }
        }
    }

    else if (choice1 == 3)
    {
        if (n == 0)
        {
            cout << "no car detail avaliaable" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                car[i].display();
            }
        }
    }
    else
    {
        cout << "Enter valid choice";
    }
    return 0;
}
