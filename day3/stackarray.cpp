#include <bits/stdc++.h>
using namespace std;

#define n 5

class myStack {
    int arr[n];
    int topIndex;  // to track the top of stack

public:
    myStack() {
        topIndex = -1;  // empty stack
    }

    void push(int x) {
        if (topIndex == n - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = x;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    myStack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    s.pop();
    s.pop();
    s.pop(); // Underflow

    if (s.isEmpty()) {
        cout << "Stack is empty." << endl;
    }

    return 0;
}
