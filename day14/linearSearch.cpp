#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int target,int i,int size){
      if(i>=size){
        return -1;
      }
        if(arr[i]==target){
          return i;
        }
    return   LinearSearch(arr, target,i+1,size);
}
int main() {
    int arr[7]={14,78,34,99,12,90,77};
    int idx=LinearSearch(arr,78,0,6);
    cout<<idx<<endl;
    return 0;
  }