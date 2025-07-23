#include <iostream>

#define SIZE 5

using namespace std;

template <typename T>

class MyStack {

private:

  T arr[SIZE];

  int ptr = -1;

public:

  void push(T val)

  {

    if (ptr == SIZE - 1)

    {

      cout<<"Stack overflow"<<endl;

      return;

    }

    arr[++ptr] = val;

  }

  void pop()

  {

    if (empty())

    {

      cout<<"Stack underflow"<<endl;

      return;

    }

    ptr--;

  }

  T top()

  {

    if (empty())

    {

      cout<<"Stack is empty"<<endl;

      return T();

    }

    return arr[ptr];

  }

  bool empty()

  {

    return ptr == -1;

  }

};



