#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int j, i, element;
    vector<int> v;

    while (cin >> element)
    {
        v.push_back(element);
    }
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    
    // Now i want insert 6 at third position
    v.insert(v.begin() + 2, 6);
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    // chele thi biju delet karvu hoy to
    v.erase(v.end() - 2);
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}