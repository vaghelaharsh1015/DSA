//  find the union of two arrays

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of arrays: ";

    // Print first array elements
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }

    // Print elements of second array if not present in first
    for (int i = 0; i < n2; i++)
    {
        bool found = false;

        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}
