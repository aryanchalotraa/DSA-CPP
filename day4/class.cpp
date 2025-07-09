//methods :function inside class is called method
//ways to declare methods

//inside class and outside method
//the metod which are define and declare in side class is called inside class class
//outside class func :method which are declared inside the same class but define outside the class using scope resolution operaor

#include <bits/stdc++.h>
using namespace std;
class Data{
  private: //wrapping of data and member function into a single unit is called encasulation
  int age;
  string name;
  public:
  // int age;
  // string name;
  
  // Data(int a ,string n){
  //   this->age=a;
  //   this->name= n;
  // }
  void getData(void){
    cout<<"Name: " ;
    cin>>name;
    cout<<"age: ";cin>>age;
  }
  void PRint(void);
};
void Data:: PRint(){
  cout<<"name :"<<name<<endl;
  cout<<"age: "<<age<<endl;
}

int main() {
   // Data acc;//default constructor\\non para 
   // acc.PRint();
    Data ac;
    ac.getData();
    ac.PRint();
    return 0;
}
//constructor is the specail type of member function or method in c++ which automatically invok or called when object of class is created .
//key points:
//constuctor name == class name
//automatically invok at time of object creation
//memoery is allocated once for constructor at time of object creation
//constructor donot have any return type
//with respect to parametrise constructor we can pass thr arguments at the time of object creation with help of parantesis
//types of constructor :it should be public
//majorly 3 type of constructor 
//default , copy, parametrise
//default :it is automatically invoke orimplicitly passed by the language proccessor  that we dont create any constructor
//non parametrise : constructor dont have parameter 
//