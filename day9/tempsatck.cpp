#include <bits/stdc++.h>
using namespace std;
template < typename T, typename u>
auto sum (T a,u b){
  return a+b;
}

int main() {
    cout<<sum(10.5f,10.5f)<<endl;
    cout<<sum(10,10)<<endl;
    cout<<sum(10.5f,10)<<endl;
    cout<<sum(10,10.5f)<<endl;
    return 0;
}