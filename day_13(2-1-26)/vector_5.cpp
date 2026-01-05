// Check if vector is empty using empty()

#include<iostream>
#include<vector>

using namespace std;

int main()
{

  vector<int> H = {10,15};

  if(H.empty())
  {
    cout << "vector is empty.";
  }

  else{
    cout<< "vector is not empty.";
  }
  return 0;
}