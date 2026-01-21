#include <iostream>

using namespace std;

#define size 5

class Queue{
  int arr[size];
  int front , rear;

  public:
    Queue(){
      front = -1;
      rear = -1;
    }

  // insert

  void enQueue(int val){

    if(rear == size - 1){
      cout << "Queue is full\n";
    }

    if(front == -1)
    {
      front = 0;
    }

    rear++;

    arr[rear] = val;

    cout << val << "insert\n";

  }

  void deQueue(){
    if(front == -1 || front > rear)
    {
      cout << "Queue is Empty\n";
      return;
    }

    cout << arr[front] << "removed\n";
  }
};