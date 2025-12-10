#include <iostream>
using namespace std;

int main()
{
    int n;

    int arr[5];
    int flag = 1;

    int start = 0, end = n - 1;

    while (start < end)
    {
        if (arr[start] == arr[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        cout << "Palindrome\n";
    else
    {
        end = 0;
        cout << "Not Palindrome\n";
    }

    return 0;
}
