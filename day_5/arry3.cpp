// closigest num of 

# include <iostream>

using namespace std;

int main()
{


    int arr[] = {10, 11, 19 , 20 , 18};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 6;

    int closest = arr[0];

    int minDiff = abs(arr[0] - target);

  for(int i = 1; i < n; i++){
    int diff = abs(arr[i] - target);

    if(diff < minDiff){
      minDiff = diff;
      closest = arr[i];
    }
  }

  cout << "closest: " << closest << endl;

  return 0;
}