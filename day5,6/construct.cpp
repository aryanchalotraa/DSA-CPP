#include <bits/stdc++.h>
using namespace std;
class btech{
  public:
  int roll;
  float cgpa;
  btech(){}
  btech(int r,float f):roll(r),cgpa(f){}
  btech (btech &obj){ //shallow copy
    this->roll=249;
    this->cgpa=8.8;
  }
};
int main() {
  btech s1,s2(44,8.9);
  cout<<s2.roll<<" "<<s2.cgpa;
  // btech s3(s2);
  // btech s3 = {s2};
  btech s3= s2;
  cout<<s3.roll<<" "<<s3.cgpa;
  return 0;
}