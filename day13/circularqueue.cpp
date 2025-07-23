#include <bits/stdc++.h>
#define size 5
using namespace std;

class cqueue {
public:
    int f = -1;
    int r = -1;
    int arr[size];

    void push(int val) {
        if (isFull()) {
            cout << "Queue is full.\n";
            return;
        }
        if (isEmpty()) {
            f = r = 0;
        } else {
            r = (r + 1) % size;
        }
        arr[r] = val;  // common to both cases
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        if (f == r) {
            // only one element
            f = r = -1;
        } else {
            f = (f + 1) % size;
        }
          
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[f];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        int i = f;
        while (true) {
            cout << arr[i] << " ";
            if (i == r) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    bool isEmpty() {
        return f == -1;
    }

    bool isFull() {
        return ((r + 1) % size == f);
    }
};

int main() {
    cqueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); // full here
    q.display(); // Output: 10 20 30 40

    cout << "Front: " << q.front() << endl;

    q.pop();
    q.pop();
    q.display(); // Output: 30 40

    q.push(60);
    q.push(70); // reuse space in circular way
    q.display(); // Output: 30 40 60 70

    q.push(80); // should say "Queue is full"

    return 0;
}
//input restricted and output restriced