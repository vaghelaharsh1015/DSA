#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "aaabbc";
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        int count = 1;
        // While the next character is the same, keep moving and counting
        while (i < s.length() - 1 && s[i] == s[i+1]) {
            count++;
            i++;
        }
        result += s[i];           // Add the letter
        result += to_string(count); // Add the number
    }
    cout << "Compressed: " << result << endl;
    return 0;
}