//  C++ Program to rotating elements by a certain number of positions in given array

// Array rotation mean shifting element left or right by a fixed number of positions.

// (Left Rotation by k = 2)

// original array : 1 2 3 4 5 6
// after rotation : 3 4 5 6 1 2

#include <iostream>

using namespace std;

// function to reverse array from start to end

void reverse(int arr[], int start, int end)
{

  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50};
  int n = 5;
  int k = 4;

  k = k % n; // k < n

  // step 1
  reverse(arr, 0, n - 1); // 0 - 4 //

  // step 2
  reverse(arr, 0, k - 1); // 0 - 2 // [50] [40] = [40] [50]

  // step
  reverse(arr, k, n - 1); // 3 - 3 // 30 40 50 10 20

  cout << "Array after rotation: ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}