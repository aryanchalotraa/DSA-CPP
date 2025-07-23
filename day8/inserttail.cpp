#include <bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *prev;
  node *next;
  node(int d) : data(d), prev(NULL), next(NULL) {}
};
// Print the list in forward direction
void printList(node *head)
{
  if (!head)
  {
    cout << "List is empty.\n";
    return;
  }

  node *temp = head;
  cout << "List: ";
  do
  {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
}
// Insert at the head of circular doubly linked list
void insertAtHead(node *&head, int value)
{
  node *newNode = new node(value);
  if (!head)
  {
    newNode->next = newNode;
    newNode->prev = newNode;
  head = newNode;

   return;
  }
  node *tail = head->prev;
  newNode->next = head;
  newNode->prev = tail;
  tail->next = newNode;
  head->prev = newNode;
 head = newNode;
}
// Insert at the tail of circular doubly linked list
void insertAtTail(node *&head, int value)
{
  if (!head)
  {
    insertAtHead(head, value);
   return;
  }
  node *newNode = new node(value);
  node *tail = head->prev;
  newNode->next = head;
  newNode->prev = tail;
  tail->next = newNode;
 head->prev = newNode;
}
// Main function to test the code
int main()
{
  node *head = NULL;
  insertAtHead(head, 30);
  insertAtHead(head, 20);

  insertAtHead(head, 10);
  printList(head); // Output: 10 20 30
  insertAtTail(head, 40);
  insertAtTail(head, 50);
  printList(head); // Output: 10 20 30 40 50
  return 0;
}
