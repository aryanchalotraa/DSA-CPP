#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> *v= new vector<int>; //dyanmic allocation
    // int n;
    // cin>>n;
    // for(int  i =0;i<n;i++){
    //   int ele;
    //   cin>>ele;
    //   v->push_back(ele);
    // }
    // for(int  x:*v){
    //   cout<<x<<" ";
    // }
    v->push_back(10);
    (*v).push_back(20);
    v->resize(4); //use to allocate memory block dyanamically
    (*v)[2]=30;
    (*v)[3]=40;
    for(auto i :*v){
      cout<<i<<" ";
    }
    return 0;
}

