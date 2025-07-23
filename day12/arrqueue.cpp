#include <bits/stdc++.h>
#define size 5
using namespace std;

class myQueue{
  public:
  int arr[size];
  int f;
  int r;  
  myQueue():f(-1),r(-1){}
  void push(int);
  void pop();
  bool empty();
  int front();
  int back();
};
void myQueue::push(int d){
  if(r==size-1){
    cout<<"overflow"<<endl;
    return;
  }
  if(f==-1&&r==-1){
    f=r=0;
  }else {
    r++;
  }
  arr[r]=d;
}
void myQueue::pop(){
  if(f==-1||f>r){
    cout<<"underflow"<<endl;
  }
  cout<<"popped: "<<arr[f]<<endl;
  f++;
}
bool myQueue :: empty(){
  return f==-1||f>r;
  //if(f==r)return true; 
}
int myQueue::front(){
  if(empty()){
    cout<<"queue is empty"<<endl;
      return -1;
  }
  return arr[f];

}
int myQueue::back(){
  if(empty()){
    cout<<"queue is empty"<<endl;
      return -1;
  }
  return arr[r];

}
int main() {
   myQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // Should give overflow
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.pop();
    q.pop();
    cout << "Front after pops: " << q.front() << endl;
    while (!q.empty()) {
        q.pop();
    }
    q.pop(); // Should give underflow
  return 0;
   
}