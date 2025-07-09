// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n;
//     cout << "Enter number of terms: ";
//     cin >> n;
//     cout << "Fibonacci series:\n";
//     for (int i = 0; i < n; ++i) {
//         cout << fib(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void sum(int num){
  static int s =0; //static storage class which makes variable as global
  if(num==0){
    cout<<s;
    return;
  }
  s+= num;
  sum(num-1);
}
int main() {
    sum(10);
    cout<<"sum is";
    return 0;
}