#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 40, 5, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Find second largest
    int secondLargest = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest == -1)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << secondLargest;

    return 0;
}
