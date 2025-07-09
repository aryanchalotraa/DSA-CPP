// wap to print student detail roll and cgpa
//  note initilize roll and cgpa using constructor and print this detail via display function.
//  roll no and cgpa must be data member of btech class

#include <bits/stdc++.H>
using namespace std;
class Btech
{
public:
  int roll_no;
  float cgpa;

  // Btech(int x, float y){
  // roll_no = x;
  // cgpa =y;}

  Btech(int x, float y) : roll_no(x), cgpa(y) {} // initilizer list

  void display()
  {
    cout << roll_no;
    cout << cgpa;
  }
};

int main()
{
  Btech s1(69, 8.5);
  s1.display();
  cout << "roll no" << s1.roll_no << " cgpa " << s1.cgpa;
  return 0;
}