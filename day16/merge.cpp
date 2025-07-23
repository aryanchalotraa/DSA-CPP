#include <bits/stdc++.h>
using namespace std;
void merge(vector <int>&arr,int mid, int si,int li){
  int s1= mid -si+1;
  int s2= li-mid;
  int *a =new int[s1];
  int *b = new int[s2];

  for(int i=0;i<s1;i++){
    a[i]=arr[si+i];
  }
  for(int  i-0;i<s2;i++){
    b[i]=arr[mid+1+i];
  }
  int i=0; j=0; k=si;
  while(i<s1&& j<s2){
    if(a[i]<= b[j]){
      arr[k++] =a[i++];

    }else arr [k++] =b[j++];
  }
}
void mergeSort(vector <int> &arr, int si,int li){
  if(si<li){
    int mid = (si+li)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,li);
    merge(arr,mid,si,li);
  }
}
int main() {
    vector <int> arr ={12,56,16,23,89,90};
    mergeSort(arr,0,arr.size()-1);
    return 0;
} 