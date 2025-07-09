#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={10,20,30,40};
    int i =0;
    while(i!=5){
      printf("%d \t",&arr[i]);
      printf("%d \t",arr+i); //address of all index of an array
      printf("%d \t",*arr+i); //value of an array
      i++;
    };

    // cout<<*arr<<endl; //constant pointer name array
    // cout<<arr[2]<<endl;

    // int num1 =20;
    // int num2=40;
    // int *ptr = &num1;
    // cout<<ptr<<endl;
    // ptr++; //pointer arthemtic
    // cout<<ptr<<endl;
    return 0;
}