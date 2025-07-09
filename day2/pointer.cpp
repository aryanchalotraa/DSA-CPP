//dangling pointer 
//genric pointer dont have any datatype
//genric code dont deal with datatype




#include <bits/stdc++.h>
using namespace std;

int c=100;

int main()
{
  int num =20;
  int *ptr =&num;
  int &x=num;//alias refrence
  cout<<num<<endl;
  cout<<ptr<<endl;
  cout<<x<<endl;
  cout<<::c<<endl;//scope resolution operator to access global value
  return 0;
}