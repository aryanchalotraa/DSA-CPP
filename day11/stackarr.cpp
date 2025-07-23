#include <bits/stdc++.h>
using namespace std;

#define SIZE 5
template <typename T>
class myStack {
public:
    T arr[SIZE];
    int ptr = -1;

    void push(int val);
    void pop();
    T top();
    bool empty();
};

bool myStack::empty() {
    return ptr == -1;
}

T myStack::top() {
    if (ptr == -1) {
        cout << "Stack is empty\n";
        return -1;
    }
    return arr[ptr];
}

void myStack::push(T val) {
    if (ptr == SIZE - 1) {
        cout << "Stack overflow\n";
        return;
    }
    ptr++;
    arr[ptr] = val;
}

void myStack::pop() {
    if (ptr == -1) {
        cout << "Stack underflow\n";
        return;
    }
    ptr--;
}

int main() {
    myStack<int> s;

    
    for (int i = 10; i <= 50; i += 10) {
        s.push(i);
    }

    
    //s.push(60);

    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
