#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v={100,20,30,40};
//   int a = 0;
//   for(int i =0;i<v.size();i++){
//     a+=v[i];
//   }
//   cout<<a<<endl;
//   int large= INT_MIN; //preprocessor macro 
//  for(int i=0 ;i<v.size();i++){
//   if(v[i]>large){
//     large = v[i];
//   }
//  }
//  cout<<large;


// for(int i=v.size()-1,j=0;j<i;i--,j++){  //reverse
//   swap(v[i],v[j]);
//   for(auto i:v) cout<<i<<" ";
// }

vector<int>v2 ={20,30,40,50};
vector <int> ans;
for(int i=0;i<v.size();i++){
  for(int j=0;j<v2.size();j++){
    if(v[i]==v2[j]){
      ans.push_back(v[i]);
    }
  }
}
for(auto i:ans){
  cout <<i<<" "; 
}

return 0;
}