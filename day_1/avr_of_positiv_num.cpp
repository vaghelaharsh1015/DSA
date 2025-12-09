#include <iostream>

using namespace std;

int main()
{

    int arr[] = {-1, 2, -3, -4, 5, 6, -7, 8, 9, 100};

    int size = sizeof(arr) / sizeof(arr[0]);

    int positive_sum = 0;

    int positivecount = 0;

    float avr = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive_sum += arr[i];
            positivecount++;
        }
    }

    avr = positive_sum / positivecount;

    cout << "positive sum ave is : " << avr << endl;

    return 0;
}