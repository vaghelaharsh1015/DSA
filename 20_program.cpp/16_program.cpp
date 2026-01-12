// move all zero elements to the end of the array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 0; // index for non-zero elements

    // Move non-zero elements to front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }

    // Fill remaining with zeros
    while (k < n)
    {
        arr[k] = 0;
        k++;
    }

    // Print result
    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
