// Check if two strings are anagrams of each other.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "silent", s2 = "listen";
    int alphabet[256] = {0}; // A "scorecard" for every possible character

    if (s1.length() != s2.length()) {
        cout << "Not anagrams" << endl;
        return 0;
    }

    for (int i = 0; i < s1.length(); i++) {
        alphabet[s1[i]]++; // Score up
        alphabet[s2[i]]--; // Score down
    }

    for (int i = 0; i < 256; i++) {
        if (alphabet[i] != 0) {
            cout << "Not anagrams" << endl;
            return 0;
        }
    }
    cout << "They are anagrams!" << endl;
    return 0;
}