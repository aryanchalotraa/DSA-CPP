#include <bits/stdc++.h>
using namespace std;
class btech{
public:
int roll;
int cgpa;
btech():roll(55),cgpa(22){}
void print(){
  cout<<"address "<<this<<endl;
}
};
int main() {
    btech s1;
    cout<<"address mian "<<&s1<<endl;
    s1.print();
    btech s2;
    cout<<"address mian "<<&s2<<endl;
    s2.print();
    return 0;
}

