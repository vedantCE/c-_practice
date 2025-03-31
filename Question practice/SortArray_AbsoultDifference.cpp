#include <iostream>
#include <vector>
using namespace std;

int main() {
    int element, x;
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter array elements in sorted order (press any non-integer key to stop): ";
    vector<int> v;

    while (cin >> element) {
        v.push_back(element);
    }

    int size = v.size();

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int diff = v[j] - v[i];

            if (diff == x) {
                cout << "YES";
                return 0;
            } else if (diff > x) {
                break;
            }
        }
    }

    cout << "NO";
    return 0;
}
