//  find all duplicate elements in an array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool printed[n] = {false};

    cout << "Duplicate elements are: ";

    for(int i = 0; i < n; i++) {

        if(printed[i])
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                printed[j] = true;
                break;
            }
        }
    }

    return 0;
}

