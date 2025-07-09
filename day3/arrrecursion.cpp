#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
  static int i=0;
  if(i==n){return 0;}
  return arr[i++]+sum(arr,n);//
  return arr[0]+sum(arr+1,n-1);
}
int main() {
    int arr[5]={10,12,45,23,77};
    cout<<sum(arr,5);
    return 0;
}