#include <bits/stdc++.h>
using namespace std;

int main() {
    int num =20;
  int *ptr =&num;
  int &x=num;
  cout<<num<<endl;
  cout<<*ptr<<endl;
  cout<<**(&ptr)<<endl;
  cout<<*(&num)<<endl;//derefrence

  cout<<&num<<endl;
  cout<<ptr<<endl;
  cout<<&x<<endl;
  cout<<*(&ptr)<<endl;
  return 0;
}