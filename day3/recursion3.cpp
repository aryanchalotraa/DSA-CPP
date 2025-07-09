#include <bits/stdc++.h>
using namespace std;

void func(int num){
  if(num>=10){ //base case
    return;   
  }
  func(num+1); //backward recursion
  cout<<"hello"<<num<<endl;
  //func(num+1); //forward recusrion
}
int main() {
  int n;
  cin>>n;
  func(1);
  return 0;
}