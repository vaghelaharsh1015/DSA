#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "abcabcbb";
    vector<int> last_seen(256, -1);
    int start = 0, max_len = 0;

    for (int i = 0; i < s.length(); i++) {
        // If we saw this letter recently, move the start of our window
        if (last_seen[s[i]] >= start) {
            start = last_seen[s[i]] + 1;
        }
        last_seen[s[i]] = i;
        // Check how wide our window is right now
        max_len = max(max_len, i - start + 1);
    }
    cout << "Longest unique part is length: " << max_len << endl;
    return 0;
}