#include <bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* prev;
  node * next;
  node (int d):data(d),prev(NULL),next(NULL){}
} ;
// void printForward(node* head){
//     if (head == NULL) return;

//     node* temp = head;
//     cout << "Forward: ";
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);    
//     cout << endl;
// }
void printForward(node * head){
  node* temp= head;
  while(temp->next !=head){
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  cout<<temp->data<<endl;
}

int main() {
    node* head= new node(10);
    head->prev= head;
    head->next = head;
    
  node* n2= new node(10);
    n2->prev= head;
    n2->next = head;
    head->prev=n2;
    head->next= n2;
    node * n3 = new node(30);
    node * n4 = new node(40);

    n2->next= n3;
    n3->prev= n2;
    n3->next =n4;
    n4->prev = n3;
    n4->next = head;
    head->prev=n4;
    printForward(head);
    return 0;
}