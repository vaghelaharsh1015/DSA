// C++ Program for RIGHT rotation of array elements by k positions

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

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int k = 2;

    k = k % n; // k < n


    // 50 40 30 20 10
    reverse(arr, 0, n - 1);


    //  40 50 | 30 20 10
    reverse(arr, 0, k - 1);

 
    //  40 50 | 10 20 30
    reverse(arr, k, n - 1);

    cout << "Array after RIGHT rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
