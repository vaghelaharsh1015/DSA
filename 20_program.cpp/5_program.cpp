// merge two arrays into a third array.

#include <iostream>
using namespace std;

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int c[6];

    int i;

    // Copy first array into third array
    for(i = 0; i < 3; i++) {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(i = 0; i < 3; i++) {
        c[i + 3] = b[i];
    }

    // Print merged array
    cout << "Merged Array: ";
    for(i = 0; i < 6; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
