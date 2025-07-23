#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target, int s, int e) {
    // while (s <= e) {
    //     int mid = (s + e) / 2;

    //     if (arr[mid] == target) return mid;
    //     else if (arr[mid] < target) s = mid + 1;  // search right half
    //     else e = mid - 1;                         // search left half
    // }
    // return -1;  // target not found
    if(s>e){
      return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target)return binarySearch(arr,target,s=mid+1,e); 

    else  return binarySearch(arr,target,s,e= mid-1);
   
}

int main() {
    int arr[7] = {14, 18, 34, 59, 66, 91, 99};
    int idx = binarySearch(arr, 66, 0, 6);
    
    if (idx != -1)
        cout << "Element found at index: " << idx << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
