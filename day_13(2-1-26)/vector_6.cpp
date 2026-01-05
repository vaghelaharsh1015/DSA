// Resize a vector to larger and smaller size

#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> H = {10,20,30};

  H.resize(4);

  cout << "After incresing size:";
  for(int x : H) cout << x << " ";

  return 0;
}