#include <bits/stdc++.h>
using namespace std;
template<class a,class b>
auto Swap(a var1, b var2){
  var1= var1+var2;
  var2= var1-var2;
  var1= var1-var2;
  cout<<var1<<" "<<var2;
}
int main() {
 { auto var1 = 'a';
  auto var2 = 'b';
  Swap(var1,var2);  

 }

{
  auto var1 = 4;
  auto var2 = 2;
  Swap(var1,var2);  
  
    return 0;
}
}