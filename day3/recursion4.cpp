#include <bits/stdc++.h>
using namespace std;

int multipler(int n,int m) {
  if (m>10) return 1;
  cout<<n*m<<endl;
    
  return multipler(n ,m+1);
}

int main() {
  int n;   
  cin >> n;

  cout << "Factorial of " << n << " is: " << multipler(n,1) << endl;

  return 0;
}
