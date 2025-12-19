#include <iostream>

using namespace std ;

int main()
{
  int arr[] = {545 , 78 , 23 , 65 , 10 , 2};

  int n=6;

  for(int i = 0 ;i<n-1;i++)
  {
    int minindex = i ;

    for(int j = i + 1; j < n; j++)
    {
      if(arr[j] < arr[minindex]){
        minindex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"  ";
  }

  return 0;
}