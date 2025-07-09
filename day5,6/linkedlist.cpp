//RAID
//node self refrence pointer
#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;//self refrentail pointer
};
void print (node* head){
  node* temp =head;
  while(temp!=NULL){
    cout<<temp->data<<" "<<temp->next<<endl;
temp= temp->next;
  }
}
void addNode(node* next,node*head2,int value){
  node* new1 = new node;
  node* temp = next;
  node*temp2=head2;
  new1->data= value;
  temp->next=new1;
  new1->next =temp2;


}
void insertTail(node*& head,int value){
  node * temp =head;
  node* newnode=new node;
  if(head ==NULL){
    newnode->data=value;

    newnode->next=NULL;
    head= newnode;
    return;
  }
  while(temp ->next!=NULL)
    temp=temp->next;
    
    newnode->data =value;
    newnode->next=NULL;
    temp->next=newnode;
  
}
int main() {
    //node *n1 =new node;
    node* n1= NULL;
    // node* n2 =new node;
    // n2->data =20;
    // n2->next =NULL;
    // n1->next =n2;  
    // node *n3 =new node;
    // n3->data=30;
    // n3->next =NULL;
    // n2->next=n3;  
    
    // printf("%d->%s",n1->data,n3->next);
    // //cout<< *(n1->next)<<endl;
    // cout<<n1->next->next<<endl;//address of n3
    // cout<< (n1->next)->data<<endl;
    // cout<< n1->next->next->data<<endl;
    // print(n1);
    insertTail(n1,10);
    insertTail(n1,20);
    insertTail(n1,30);
 
    //addNode();
    print(n1);
    return 0;
}