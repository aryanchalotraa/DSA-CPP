#include "MyStack.h"



int main()

{

  MyStack<int> s;

  s.push(10);

  s.push(20);

  s.push(30);

  s.push(40);

  s.push(50);

  s.push(60);

  while (!s.empty())

  {

    cout<<s.top()<<" ";

    s.pop();

  }

  cout<<endl;

  MyStack<string> strStack;

  strStack.push("Hello");

  strStack.push("World");

  while (!strStack.empty())

  {

    cout<<strStack.top()<<" ";

    strStack.pop();

  }

  cout<<endl;

  return 0;

}
