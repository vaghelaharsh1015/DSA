// Create a vector of integers , initialize it with some values , and print the values to the console.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> H ={ 10,15,20,26,14,1};

  for(int i=0;i< H.size();i++)
  {
    cout << H[i] << " ";
  }

  return 0;
}