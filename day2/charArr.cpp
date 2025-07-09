#include <bits/stdc++.h>
using namespace std;

int main() {
    char *ptr[3]={"we","are","coders"};
    cout<<&ptr[0]<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+2)<<endl;
cout<<*(ptr+2)+3<<endl;


    // int i=0;
    // while(i<3){
    //   cout<<*(ptr+i)<<" ";
    //   i++;
    // }
    return 0;
}