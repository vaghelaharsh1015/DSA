#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

class SocialGraph {
    // Key: Person's Name, Value: List of Friends
    map<string, vector<string>> network;

public:
    void addFriendship(string personA, string personB) {
        network[personA].push_back(personB);
        network[personB].push_back(personA);
    }

    void findConnection(string start, string target) {
        if (start == target) {
            cout << "You are looking for yourself!" << endl;
            return;
        }

        queue<string> q;
        map<string, bool> visited;
        map<string, string> parent; // To reconstruct the path

        q.push(start);
        visited[start] = true;

        bool found = false;
        while (!q.empty()) {
            string current = q.front();
            q.pop();

            if (current == target) {
                found = true;
                break;
            }

            for (const string& neighbor : network[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = current; // Track how we got here
                    q.push(neighbor);
                }
            }
        }

        if (found) {
            printPath(start, target, parent);
        } else {
            cout << "No connection found between " << start << " and " << target << "." << endl;
        }
    }

    void printPath(string start, string target, map<string, string>& parent) {
        vector<string> path;
        string curr = target;
        
        while (curr != "") {
            path.push_back(curr);
            curr = parent[curr]; // Move backwards through the 'parent' map
            if (curr == start) {
                path.push_back(start);
                break;
            }
        }

        reverse(path.begin(), path.end());

        cout << "Connection found: ";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << (i == path.size() - 1 ? "" : " -> ");
        }
        cout << " (" << path.size() - 1 << " degrees of separation)" << endl;
    }
};

int main() {
    SocialGraph fb;

    fb.addFriendship("Alice", "Bob");
    fb.addFriendship("Bob", "Charlie");
    fb.addFriendship("Alice", "Diana");
    fb.addFriendship("Diana", "Edward");
    fb.addFriendship("Edward", "Charlie");
    fb.addFriendship("Charlie", "Frank");

    // Let's find how Alice is connected to Frank
    fb.findConnection("Alice", "Frank");

    return 0;
}