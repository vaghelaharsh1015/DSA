// insert an element at a specific position in an array.

#include <iostream>
using namespace std;

int main() {
  
    int arr[] = {10, 15, 7, 8, 22, 26}; 
    int n = 6; 
    int indexnum;
    int num;

    cout << "Enter the index (0 to 5) where you want to insert: ";
    cin >> indexnum;

    if (indexnum >= 0 && indexnum <= n) {
        cout << "Enter the value to store: ";
        cin >> num;

        for (int i = n; i > indexnum; i--) {
            arr[i] = arr[i - 1];
        }
        arr[indexnum] = num;
        n++; 

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } 
    return 0;
}
