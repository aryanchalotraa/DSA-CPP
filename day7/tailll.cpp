#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* prev;
  node* next;
  node(int d):data(d),prev(NULL),next(NULL){} //intilier list
};
void printForward(node* head) {
  node* temp = head;
  cout << "Forward: ";
  while (temp != NULL) {
    cout <<temp->prev<<" "<< temp->data << " "<<temp->next<<endl;
    temp = temp->next;
  }
  cout << endl;
}

void insertTail(node * head,int val){
  node* newnode =new node(val);
  node* temp = head;
  while(temp->next!=NULL)
  temp=temp->next;
  temp->next = newnode;
  newnode->prev=temp;
}
void insertHead(node *&head,int val){
  node * newnode = new node(val);
  if(head ==NULL){
    head= newnode;
    return;
  }
  node * temp = head;
  temp->prev= newnode;
  newnode->next=temp;
  head=newnode;

}
void deleteTail(node *&head){
  node * temp = head;
  if(temp==NULL)return;
  if(temp->next==NULL){
    delete temp;
    temp=NULL;
    return;
  }
 
  // while(temp->next!=NULL){
  //   temp=temp->next;
  // }
  //  temp->prev->next = NULL;  
  // delete temp;
  while(temp->next->next!=NULL)
  temp =temp->next;

  node* toDelete =temp->next;   
  temp->next=NULL;
  delete toDelete;
}
void deleteSpec(node *head,int pos){
  node * temp= head;
  int i=0;
  while(   i!=pos-1){
    temp =temp->next;
    i++;
  }
  node* todelete = temp->next;
  todelete->next->prev=temp;
  temp->next=todelete->next;
  delete todelete;
}
// void delteSeries(node * head,int s,int e){
//   for(int i=e ;i>s;i--){
//     deleteSpec(head,i);
//   }
// }
void deleteSeries(node*& head, int s, int e) {
  node* current = head;
  int pos = 0;

  // Move to the start position
  while (current && pos < s) {
    current = current->next;
    pos++;
  }

  // Delete nodes from s to e (inclusive)
  while (current && pos <= e) {
    node* temp = current;
    current = current->next;

    if (temp->prev) {
      temp->prev->next = current;
    } else {
      head = current;  // if we're deleting the head
    }

    if (current) {
      current->prev = temp->prev;
    }

    delete temp;
    pos++;
  }
}

int  main(){
  // node *head = new node(10);
  node *head = NULL;
   insertHead(head,69);
  insertTail(head,20);
  insertTail(head,30);
  insertTail(head,40);
  insertTail(head,50);
  //deleteSpec(head,3);
 // deleteTail(head);
  int start;
  int end;
  cin>>start>>end;
  printForward(head);
  for(int i = end ; i >= start; i--){
    deleteSpec(head,i);
  }
  printForward(head);
 cout<<endl;
  return 0;
}