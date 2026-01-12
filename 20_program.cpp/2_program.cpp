#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting array (Bubble Sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Finding second smallest (ignoring duplicates)
    int secondSmallest = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }

    if(secondSmallest == -1)
        cout << "Second smallest element does not exist";
    else
        cout << "Second smallest element is: " << secondSmallest;

    return 0;
}
