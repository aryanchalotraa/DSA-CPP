#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *prev;
    node *next;

    node(int d) : data(d), prev(NULL), next(NULL) {}
};

// Function to reverse a doubly linked list
void reverse(node *&head) {
    node *temp = NULL;
    node *curr = head;

    while (curr != NULL) { ////////null
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    // Adjust the new head
    if (temp != NULL) {
        head = temp->prev;
    }
}

// Function to print the doubly linked list
void printList(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node *n1 = new node(10);
    node *n2 = new node(20);
    node *n3 = new node(30);

    // Link the nodes
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;

    cout << "Original List: ";
    printList(n1);

    reverse(n1);

    cout << "Reversed List: ";
    printList(n1);

    return 0;
}
