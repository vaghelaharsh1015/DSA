#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abcd", s2 = "cdab";

    if (s1.length() != s2.length()) {
        cout << "No" << endl;
    } else {
        string combined = s1 + s1; // "abcdabcd"
        if (combined.find(s2) != string::npos) {
            cout << "Yes, it's a rotation!" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}