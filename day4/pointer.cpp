#include <bits/stdc++.h>
using namespace std;
void swap(int* ,int* );
void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main() {
    int a =5 ,b=6;
    swap(a,b);
    swap(&a,&b);
    cout<<"A :"<<a<<"B : "<<b;
    return 0;
}