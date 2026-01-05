// // Reverse a vector using a reverse()

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//   vector<int> v = {10,20,30,40};

//   for(int x:v)
//   {
//     cout << x << " ";
//   }

//   v.reverse(v.begin(), v.end());

//   cout << "\nAfter reversing the vector: ";
//   for(int x : v){   
//     cout << x << " ";
//   }

//   return 0;
// }

// Reverse a vector using a reverse()

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  vector<int> v = {100 , 200 , 300 , 400};

  for(int x : v){
    cout << x << " ";
  }

  v.reverse(v.begin(), v.end());

  cout << "\nAfter reversing the vector: ";
  for(int x : v){   
    cout << x << " ";
  }

  return 0;
}