#include<bits/stdc++.h>
using namespace std;
int main(){
//   vector<int>v;
//   v.push_back(10);
//   v.push_back(20);
//   v.push_back(30);
  
//   cout<<v[2]<<" ";
//  int i=0;
//   while(i!=v.size()){
//     cout<<v[i]<<" ";
//     i++;
//   }


  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  for(auto i : v){    
    cout<<i;
  }
  return 0;
}

//vector : 
// in cpp dyanmic array is implemented using the std :: vector container from standard template libraray
//we can change the sizeof vector during runtime
//imp function:
// push_back()
// pop_back()
// size()
// empty()
// clear()//pop() out all the element
// at()//return the value ay index
// front()//return the value at 0th index ele
// back()//return the value 
// begin()
// end()
