#include <bits/stdc++.h>
using namespace std;

class ring {
public:
    class node {
    public:
        int data;
        node* next;
        node(int val) : data(val), next(NULL) {}
    };

private:
    node* top = NULL;  // Corrected type

public:
    void push(int val) {
        node* newnode = new node(val);
        newnode->next = top;
        top = newnode;
    }

    void pop() {
        if (top == NULL) {
            cout << "No element inside hand\n";
            return;
        }
        node* temp = top;
        cout << "Popped: " << temp->data << endl;     
        top = top->next;
        delete temp;
    }

    void display() {
        node* curr = top;
        cout << "Stack: ";
        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    ring r;
    r.push(10);
    r.push(20);
    r.push(30);
    r.display();

    r.pop();
    r.display();

    r.pop();
    r.pop();
    r.pop();  // Attempt to pop from empty

    return 0;
}
 