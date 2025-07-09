#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v = {10,20,30,80,90};
//   v.push_back(10);
// v.push_back(20); //pop and empty
// v.push_back(30);
// v.push_back(40);
//   while(!v.empty()){
//     cout<<v[v.size()-1]<<" "<<endl;
//     v.pop_back();
//     cout<<"pop ele "<<v[v.size()-1]<<" ";
//   }
  // for(auto i:v){   //sort
  //   cout<<i<<" ";

  // }
  // sort(v.begin(),v.end());

  // for(auto i:v){
  //   cout<<i<<" ";

  // }
cout<<   * v.begin()<<endl; //return the refrence of 0th index element
cout<<  *(v.end()-1)<<endl; //return the refrence of just after last  element

cout<<v.front();
cout<<v.back();

  return 0;
}