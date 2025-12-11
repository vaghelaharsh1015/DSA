// prime number

#include <iostream>

using namespace std;

int main()
{
    int n,i,flag=0;

    cout<<"enter the num "<<endl;
    cin>>n;

    for ( i = 2; i <= n/2; i++)
    {
        if (n % i ==0)
        {
            flag=1;
            break;
        }
    }

    if (flag == 0)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
    
    
    return 0;
}