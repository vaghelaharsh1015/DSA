//  find the missing number in an array of 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;

    cout << "Pairs with given sum are:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " + " << arr[j] << endl;
            }
        }
    }

    return 0;
}
