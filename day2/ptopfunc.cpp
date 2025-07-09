#include <bits/stdc++.h>
using namespace std;
void func(){
  cout<<"hello world \n";
}
void func2(int a ,int b){
  int c;
  c=a+b;
  cout<<c<<endl;;
}
int main() {
    void (* ptr)(); //function pointer
    ptr =func;
    ptr();

    void(* ptr1)(int,int);
    ptr1 = func2;     
    ptr1(2,5);
  return 0;
}