#include <iostream>

using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);

    int sum=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }       
    }

    cout<<"Sum of even numbers is "<<sum<<endl;

    return 0;
}