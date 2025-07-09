#include <bits/stdc++.h>
using namespace std;
int num=0;
void func(){
  if(num==5){ //base case
    return;
  }
num++;
func();
  cout<<"hello"<<num<<endl;

}
int main() {
  int n;
  cin>>n;
    func();
  return 0;
}