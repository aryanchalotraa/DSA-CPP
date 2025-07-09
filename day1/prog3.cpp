//wap program name , rollno , cgpa of two student and print it
// use getdata() and putdata()   array of object //inputbuffer //why //how to solve why it rise in memoryand othercase
#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
 // char name[20];//take input as format specifier
  string name; //alias class string   
  int roll_no;
  float cgpa;
  void getData();
  void putData();
};

void Student::getData(){
  cout<<"name: "; 
  //cin>>name;//sperater show error due to single word input
  getline(cin,name); //it is used to take sentece as an input
  
  //scanf("%[\n]s",name);//take input as format specifier
  cout<<"rollno: ";
  cin>>roll_no;
  cout<<"cgpa: ";
  cin>>cgpa;
  cin.ignore();
}
void Student :: putData(){
  cout<<"name: "<<name<<".Roll no: "<<roll_no<<"cgpa: "<<cgpa<<endl;
}

int main(){
  // int size;
  // cout<<"enter the size";
  // cin>>size;
  // Student s[size];
  // for (int i=0;i<size;i++){
  //   cout<<"number of students";
  //   s[i].getData();
  // }
  
  // for (int i=0;i<size;i++){
  //   cout<<"output of student";
  //   s[i].putData();
  // }
  Student s1,s2;
  
s1.getData();
s2.getData();
s1.putData();
  s2.putData();

  return 0;
}