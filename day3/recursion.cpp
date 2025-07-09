#include <bits/stdc++.h>
using namespace std;
int num=0;
void func(){
  if(num==5){ //base case
    return;
  }
  cout<<"hello"<<num<<endl;
num++;
func();
}
int main() {
  int n;
  cin>>n;
    func();
  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int factorial(int n) {
//   if (n == 0 || n == 1)
//     return 1;
//   return n * factorial(n - 1);
// }

// int main() {
//   int n;
//   cin >> n;

//   cout << "Factorial of " << n << " is: " << factorial(n) << endl;

//   return 0;
// }
