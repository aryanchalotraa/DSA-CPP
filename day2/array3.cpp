#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=10,b=20,c=30,d=40;
  int *arr[5]{&a,&b,&c,&d}; //array of pointer
  
  int i= 0;
  while(i!=5){
    printf("%d \t",arr[i]);
    printf("%d \t",arr+i);
    cout<<**(arr+i)<<endl;
    i++;
  }
   
  return 0;
}