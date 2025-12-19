#include <iostream>

using namespace std ;

int main()
{
  int arr[] ={10,15,7,8,22,26};

  int n = 6;

  int indexnum;

  cout << " enter the indexnum beetven 0 to 5:" << endl;
  cin >> indexnum;

  for(int i = 0 ; i < n ; i++)
  {
    if(indexnum==i){
       cout<<"thise is you index value:"<<arr[i];
    }
  }
  return 0;

}
