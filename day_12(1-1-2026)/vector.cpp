#include<iostream>
#include<vector>

using namespace std;

int mian(){
    
    vector<int> v={ 10 , 15 , 20 , 30 , 40 , 50 };

    int pos = 2;

    int value = 25;

    v.insert(v.begin() + pos , value);

    for(int  y : v)
    {
        cout << y << "";
    }
    return 0;

}