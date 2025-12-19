#include <iostream>

using namespace std;

void merge(int A[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {9, 5, 10, 26, 70, 11, 8};
    int n = 7;

    mergeSort(A, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

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
//     int A[] = {9, 4, 5, 6, 7, 10, 8};
//     int n = 7;

//     cout << "Before Sorting: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }

//     mergeSort(A, 0, n - 1);

//     cout << "\nAfter Sorting: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }

//     return 0;
// }
