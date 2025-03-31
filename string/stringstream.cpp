#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string s)
{
    stringstream a(s); // used for breaking input into words

    // temp veriable banavyo
    string temp;
    int count = 0;

    while (a >> temp)
    {
        count++;
    }
    return count;
}

int main()
{

    string s = "Watching Movie CHAAVA";
    cout << "Number of words are:" << countWords(s) << endl;
    

    return 0;
}