#include <iostream>

using namespace std;

#define max 10

class stack
{
  private:
    int stack[max];
    int top;

  public:
    stack()
    {
      top = -1;
    }
}

void push(int value)
{
  if (top == max-1)
  {
    cout << "stack overflow" << endl;
  }
  else
  {
    stack[top++] = value5
  }
}