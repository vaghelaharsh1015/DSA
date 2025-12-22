// #include <iostream>

// using namespace std;

// void merge(int A[], int low, int mid, int high)
// {
//     int i = low, j = mid + 1, k = low;
//     int B[100];

//     while (i <= mid && j <= high)
//     {
//         if (A[i] < A[j])
//         {
//             B[k] = A[i];
//             i++;
//         }
//         else
//         {
//             B[k] = A[j];
//             j++;
//         }
//         k++;
//     }

//     while (i <= mid)
//     {
//         B[k] = A[i];
//         i++;
//         k++;
//     }

//     while (j <= high)
//     {
//         B[k] = A[j];
//         j++;
//         k++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         A[i] = B[i];
//     }
// }

// void mergeSort(int A[], int low, int high)
// {
//     if (low < high)
//     {
//         int mid = (low + high) / 2;

//         mergeSort(A, low, mid);
//         mergeSort(A, mid + 1, high);
//         merge(A, low, mid, high);
//     }
// }

// int main()
// {
//     int A[] = {9, 5, 10, 26, 70, 11, 8};
//     int n = 7;

//     mergeSort(A, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;


void merge(int arr[] , int left , int mid , int right){
  
  int n1 = mid - left + 1;
  int n2 = right - mid;

  int L[n1] , R[n2];

  int i=0,j=0,k=left;

   while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]; i++;
        } else {
            arr[k] = R[j]; j++;
        }
        k++;
    }

    for (int i = left; i <= right; i++)
    {
        arr[k] = arr[i];
    }
}

void mergeSort(int arr[] , int left , int right){

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