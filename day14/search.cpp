#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int begin,int end) {
    // for (int i = 0; i < size - 1; i++) {
    //     for (int j = i + 1; j < size; j++) {
    //         if (arr[i] > arr[j]) {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    if(begin>end){
      return;
    }
    int temp =begin;
    for(int i=begin;i<end;i++){
      if(arr[i]<arr[temp]) temp=i;
    }
    swap(arr[temp],arr[begin]);
    selectionSort(arr,begin+1,end);
}

int main() {
    int arr[6] = {10, 19, 13, 18, 17, 14};
    selectionSort(arr, 6);

    int i = 0;
    while (i != 6) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
    return 0;
}
