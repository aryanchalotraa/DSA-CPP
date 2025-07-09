#include <bits/stdc++.h>
using namespace std;
class party{
  public:
  int samosa;
  int methai;
  string drink;
  // party(){
  //   samosa =2;
  //   methai=3;
  //   drink="cold coffe";
  // }
  party():samosa(2),methai(3),drink("cold coffe"){}//intializer lsit
  void print(){
    cout<<""<<samosa<<endl;
cout<<""<<methai<<endl;
cout<<""<<drink<<endl;

  }
};
int main() {
    party s1,s2,s3,s4;
    s1.print();
    s2.print();
    s3.print();
    return 0;
}