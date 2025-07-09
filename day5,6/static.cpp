#include <bits/stdc++.h>
using namespace std;
class btech
{
public:
  int nonstatic;
  static int staticvar; //static variable
  btech():nonstatic(10){}
  static void staticFun(){
    cout<<"i am static method"<<endl;
    cout<<"static vae: "<<staticvar;//2
   // cout<<"non static var : "<<nonstatic<<endl;//10
  }
     void nonstaticFun(){
    cout<<"i am static method"<<endl;
    cout<<"static vae: "<<staticvar;//2
    cout<<"non static var : "<<nonstatic<<endl;
  }
};
//void btech::staticFun();
int btech::staticvar=2;//global initilization
int main()
{
  btech ::staticFun();
  btech s1,s2;
  // s1.staticvar=3;   
  // cout<<s1.staticvar<<endl;
  // cout<<s2.staticvar<<endl;
  s1.nonstaticFun();
  s1.staticFun();
  return 0;
}