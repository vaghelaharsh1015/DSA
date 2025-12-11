#include<iostream>

using namespace std;

int main ()
{
    int num1,num2;

    cout<<"enter the three num :"<<endl;
    cin>>num1>>num2;

    if (num1>num2)
    {
        cout<<"num 1 is big"<<endl;
    }
    else if(num2>num1)
    {
        cout<<"num 2 is big"<<endl;
    }

    else{
        cout<<"num is same"<<endl;
    }
    
    return 0;
}