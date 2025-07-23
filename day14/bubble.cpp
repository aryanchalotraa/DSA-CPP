#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int size){
  int i=0;
  bool flag=false;
  while(i<size){
    for(int j=0;j<size;j++){
      if(arr[j]>arr[j+1]) swap(arr[i],arr[j]) flag= true;
    }
  
  }
  if(flag==false){
     break;
     i++;
}}
int main() {
    
    return 0;
}