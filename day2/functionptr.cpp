// #include <bits/stdc++.h>
// using namespace std;
// void func(int num){
//   num=10;
// }
// int main() {
//     int num =20;
//     cout<<num<<endl;
//      func(num);
//     cout<<num<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void func(int *num)
{
  *num = 10;
}
int main()
{
  int num = 20;
  cout << num << endl;
  func(&num);
  cout << num << endl;
  return 0;
}