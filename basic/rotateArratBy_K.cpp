#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5}, k;
    cout << "Enter how much time you want to rotate array?";
    cin >> k;
    int n = 5;

    int ansArray[5], j = 0;
    k = k % n; // for K>N

    // Add the last 'k' elements to the start of the new array
    for (int i = n - k; i < n; i++)
    {
        ansArray[j] = array[i];
        j++;
    }

    // Add the remaining elements to the new array
    for (int i = 0; i < n - k; i++)
    {
        ansArray[j] = array[i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ansArray[i] << " ";
    }

    return 0;
}