#include <bits/stdc++.h>
using namespace std;
class myQueue{
  public:
  class node{
    public :
    int data;
    node* next;

    node(int val):data(val),next(NULL){}
  };
   node *f=NULL ;
  node* r=NULL;
  void push(int val ){
    node * newnode= new node(val);
    if(f==NULL){
      f= r= newnode;
      return;
    }
    r->next = newnode;
    r= newnode;

  }
  void pop(){
    if(f==NULL){
      return;
    }
    node * temp= f;
    f=f->next;
    if(f==NULL) r=NULL;
    delete temp;
  }
  int front(){
    if(f==NULL){
      return ;
    }
    return f->data;

  }
  bool empty(){
    return f==NULL;
  }
 
};

int main() {
  myQueue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  cout<<q.front()<<endl;
  q.pop();
  cout<<q.front();
  while(!q.empty()){
      cout<<q.front()<<" ";
      q.pop();
  }

    
    return 0;
}