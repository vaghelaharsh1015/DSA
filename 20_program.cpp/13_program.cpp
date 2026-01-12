//  delete an element from a specific position in an array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 7, 8, 22, 26};
   
    int n = 6; 
    int indexnum;

    cout << "enter the indexnum between 0 to 5: "<< endl;
    cin >> indexnum;

    if (indexnum >= 0 && indexnum < n) {
        for (int i = indexnum; i <= n - 1; i++) {
            arr[i] = arr[i + 1];
            n--;
        }
    } else {
        cout << "Invalid index entered." << endl;
    }
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
