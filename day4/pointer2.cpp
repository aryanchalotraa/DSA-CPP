#include <bits/stdc++.h>
using namespace std;
int change(int &r){
  r=7;
  return r;
}
int main() {
    int a=5;
    cout<<"a: "<<a;
    change(a);
    
    //int &r; //error on cpp
    // int &r=a;
    // r=7;
    //cout<<"r "<<a;
    cout<<"a :"<<a;
    return 0;
}