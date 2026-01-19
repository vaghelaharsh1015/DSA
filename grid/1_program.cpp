// Find the first non-repeating character in a string.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "harsh";
    unordered_map<char, int> counts;

    // Step 1: Count everything
    for (char c : s) {
        counts[c]++;
    }

    // Step 2: Find the first one with a count of 1
    for (char c : s) {
        if (counts[c] == 1) {
            cout << "First unique character is: " << c << endl;
            return 0;
        }
    }
    return 0;
}