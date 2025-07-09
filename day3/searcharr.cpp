#include <bits/stdc++.h>
using namespace std;

// Recursive linear search using pointer arithmetic
int linears(int arr[], int size, int n) {
    static int i = 0; // Keeps track of index across recursive calls

    if (size == 0) {
        return -1; // Element not found
    }

    if (arr[0] == n) {
        return i; // Found at current index
    }

    i++; // Move index for next element
    return linears(arr + 1, size - 1, n); // Recurse on the rest of the array
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int target = 4;

    int index = linears(arr, size, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
