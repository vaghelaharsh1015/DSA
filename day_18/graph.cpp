#include <iostream>
#include <algoritham>
#include <cstring>

using namespace std;

const int MAX_V = 100; // maximum vartix

class Undirectedway{
private:
  int V;
  bool adj[MAX_V][MAX_V];

public:
  Undirectedway(int vartix)
  {
    V = vertix;
    memset(adj, 0, sizeof(adj)); 
  }

  void addEdge(int u , int v){
    if(u >=0 && u < V && v >=0 && v < V)
    {
      adj[u][v] = true;
      adj[v][u] = true;
    }
  }

  void printgraph(){
    for(int i = 0;i < V; i++)
    {
      cout << "vertix" << i << ": ";
      for(int j = 0;j < V; j++)
      {
        if(adj[i][j]){
          cout << j << " "; 
        }
      }
      cout << endl;
    }
  }
};

int main(){
  UndirectedWay g(5);

  g.addEdge(0 , 1);
  g.addEdge(0 , 4);
  g.addEdge(1 , 2);
  g.addEdge(1 , 3);
  g.addEdge(1 , 4);

  cout << "Unidirected Way" << endl;
  
  g.printGraph();

  return 0;
}