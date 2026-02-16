// #include <iostream>
// #include <vector>
// #include <queue> 
// #include <stack> 
// #include <set>

// using namespace std();

// vector<int> graph[100];

// void BFS(int start , int n ){

//   bool visited[n] = {false};

//   queue
// }

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>

using namespace std;

vector<int> graph[100];

void BFS(int start, int n) {
    bool visited[n] = {false};
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS : ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

void DFS(int start, int n) {
    bool visited[n] = {false};
    stack<int> s;

    s.push(start);

    cout << "DFS : ";

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
    cout << endl;
}

void DFSRecursive(int node, bool visited[]) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            DFSRecursive(neighbor, visited);
        }
    }
}

void DFSRecursiveWrapper(int start, int n) {
    bool visited[n] = {false};
    cout << "DFS Recursive : ";
    DFSRecursive(start, visited);
    cout << endl;
}

void addEdge(int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int main() {
    int n = 7;

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);
    addEdge(4, 6);
    addEdge(5, 6);

    BFS(0, n);
    DFS(0, n);
    DFSRecursiveWrapper(0, n);

    return 0;
}