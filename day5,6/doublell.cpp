#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* prev;
  node* next;
  node(int d):data(d),prev(NULL),next(NULL){}
};
void printForward(node* head) {
  node* temp = head;
  cout << "Forward: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void printBackward(node* tail) {
  node* temp = tail;
  cout << "Backward: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << endl;
}
void  printbackwardrec(node *head){
  if(head==NULL) return;
      printbackwardrec(head->next);
      cout<<head->data<<" ";
} 
int main() {
  node *  n1 =new node(10);
  node* n2= new node(20);
  node* n3 =new node(30);
  n1->next =n2;  
  n2->prev=n1;
  n2->next=n3;
  n3->prev=n2;
    printForward(n1);
    printbackwardrec(n1);
     // printBackward(n3);
    return 0;
}