#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declare
    vector<int> v;

    // initial Size and Capacity
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    // element add karva
    v.push_back(1);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(2);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(4);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(3);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    // Re-size
    v.resize(5);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.resize(10);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

// End no element delet karva
    v.pop_back();
    v.pop_back();

      cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    return 0;
}