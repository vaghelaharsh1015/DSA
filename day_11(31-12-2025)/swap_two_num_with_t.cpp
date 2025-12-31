#include <iostream>

using namespace std;

template <class t>

void swaping(t &a, t &b)
{
    t temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    float k = 10.10;
    float h = 15;

    cout << "before swaping:\n" << "k value: " << k << "\t h value:" << h << endl;

    swaping(k, h);

    cout << "after swaping:\n" << "k value: " << k << "\t h value:" << h << endl;

    return 0;
}