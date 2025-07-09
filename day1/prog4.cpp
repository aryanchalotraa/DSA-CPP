//dma    and non dma
// dma heap      ndma stack 

// heap and stack diffrence
#include<bits/stdc++.h>
using namespace std;
class Btech{
  public:
  int roll;
  float cgpa;
};
int main(){
  Btech s1; //non dma
  Btech *s2 = new Btech; ///dma
  s1.roll =1;
  s1.cgpa=8.8;
   

  s2->roll = 89;
  s2->cgpa = 9.2;

  cout<<"Roll no "<<s1.roll<<" ";
  cout<<"cgpa "<<s1.cgpa<<" ";


  cout<<"Roll no "<<s2->roll<<" ";
  cout<<"Cgpa "<<s2->cgpa<<" ";
  
  return 0;
}