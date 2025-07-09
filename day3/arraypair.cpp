#include <bits/stdc++.h>
using namespace std;

int main() {

  vector <int>arr={10,12,11,19,17,16};
  pair<int,int>p[arr.size()];
  for(int i=0;i<arr.size();i++){
    p[i]=make_pair(arr[i],i);
  }
  // sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size()-1;i++){
      for(int j=0;j<arr.size()-i-1;j++){
        if(p[j].first>p[j+1].first)
        swap(p[j],p[j+1]);     
      }
    }

  for(int i=0;i<arr.size();i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }
  
  return 0;
}