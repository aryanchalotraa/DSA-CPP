#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 20, 30, 40,10};
  vector<int> unique;

  for(auto i=0;i<v.size();i++){
    bool isDupli = false;
    for(auto j=0;j<unique.size();j++){
      if(v[i]==unique[j]){
        isDupli = true;
        break;
      }
      
    }if(!isDupli){
      unique.push_back(v[i]);
    }
  }
  for(auto i :unique){
    cout<<" "<<i;
  }

  return 0;
}