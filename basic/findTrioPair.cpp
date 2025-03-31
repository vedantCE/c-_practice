#include <iostream>
using namespace std;

int main()
{
    int j, i,k, element;
    int arr[10];
    
    // Input array
    cout << "Enter your 10 numbers here: ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    // Display entered array
    cout << "Your entered array is: ";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Input required element
    cout << "Enter your required element (sum target): ";
    cin >> element;
    
    // Find and display pairs of indices
    cout << "Pairs of indices with the required sum: " << endl;
    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for(k=i+2;k<10;k++)
            {
            if (arr[i] + arr[j]+arr[k] == element)
            {
                cout << "(" << i << ", " << j <<" , "<< k<< ")" << endl;
                
            }
        }
    }
    }
    
    return 0;
}
