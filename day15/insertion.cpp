#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int j = i - 1;

      while (j >= 0 && arr[j] > curr) {
            arr[j + 1] = arr[j];  // Shift right
            j--;
        }
        arr[j + 1] = curr;  // Place current element
    }
}

int main() {
    int arr[5] = {14, 18, 10, 56, 78};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
