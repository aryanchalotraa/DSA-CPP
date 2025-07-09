#include <bits/stdc++.h>
using namespace std;

// Recursive Binary Search
int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1; // Base case: not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target); // Search left half
    } else {
        return binarySearch(arr, mid + 1, end, target);   // Search right half
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int target = 4;

    int index = binarySearch(arr, 0, size - 1, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
