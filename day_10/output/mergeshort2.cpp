#include <iostream>

using namespace std;

void merge(int arr[] , int left , int mid , int right){
  int n1 = mid - left + 1; // 4
  int n2 = right - mid;   // 3

  int L[n1] , R[n2];

  for(int i = 0; i < n1 ; i++){
    L[i] = arr[left + i];
  }

  for(int j = 0; j < n2; j++){
    R[j] = arr[mid + 1 + j];
  }

  int i = 0 , j = 0 , k = left;

  while(i < 4 && j < 3){
    if(L[i] <= R[j]){
      arr[k] = L[i];
      i++;
    }else{
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while(i < n1){
    arr[k] = L[i];
    i++;
    k++;
  }

   while(i < n2){
    arr[k] = L[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[] , int left , int right)
{
  if(left < right){
    int mid = left + (right - left) / 2;

    mergeSort(arr , left , mid); // first half left

    mergeSort(arr , mid + 1 , right); // first half right

    merge(arr , left , mid , right); // call void merge function
  }
}


int main(){

  int arr[] = {38 , 27 , 43 , 3 , 9 , 82 , 10};

  int n = 7;

  mergeSort(arr , 0 , n - 1); // call void mergeSort function

  cout << "Sorted Array : ";

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}