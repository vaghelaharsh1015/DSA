//Calculate Sum of Array Elements.

#include <iostream>

using namespace std;

int main()
{
    int arr[5],i,sum=0;
    
    cout<<"enter 5 integers:"<<endl;
    
    for ( i = 0; i < 5; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"sum of arr ="<<sum<<endl;
    
  return 0;
}