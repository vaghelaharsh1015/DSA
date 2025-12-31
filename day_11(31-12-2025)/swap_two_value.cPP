#include<iostream>

using namespace std;

void swaping(int &a, int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int k=10;
    int h=15;

    cout<<"befor swap"<<" k value: \n"<< k << " h value :"<< h << endl;

    swaping(k,h);

    cout<<"After  swap"<<" k value: "<< k << " h value :"<< h << endl;

    return 0;
}