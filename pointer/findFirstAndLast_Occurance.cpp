#include <iostream>
using namespace std;

void FindFirstAndLastOccurrence(string s, char ch, int *first, int *last) {
    *first = -1; // Initialize in case the character is not found
    *last = -1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ch) {
            *first = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ch) {
            *last = i;
            break;
        }
    }
}

int main() {
    string s = "aaabac"; // Input string
    char ch = 'a';       // Character to find
    int first = -1, last = -1;

    // Call the function
    FindFirstAndLastOccurrence(s, ch, &first, &last);

    // Output the result
    cout << first << " " << last;

    return 0;
}
