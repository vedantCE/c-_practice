#include <iostream>
#include <algorithm> // For reverse function
using namespace std;

class re {
public:

    int revers(int number) {
        int reversedNum = 0, remainder;
        while (number != 0) {
            remainder = number % 10;
            reversedNum = reversedNum * 10 + remainder;
            number /= 10;
        }
        return reversedNum;
    }

    
    string revers(string a) {
        reverse(a.begin(), a.end()); 
        return a;
    }
};

int main() {
    re b;
    
    
    int num = 10;
    cout<< b.revers(num) << endl;

    
    string str = "vedant";
    cout<< b.revers(str) << endl;

    return 0;
}
