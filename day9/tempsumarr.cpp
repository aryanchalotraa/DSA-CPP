#include <bits/stdc++.h>
using namespace std;
template <class n>
//template < n,class K,class G>
int TotalCount(n arr[],int size, int val){
  int count =0;
  for( int i=0;i<size;i++){
    if(arr[i]==val){
      count++;
    }
  }return count;

}
int main() {
      int intArr[5] = {1, 2, 2, 3, 4};
    char charArr[5] = {'i', 'i', 'j', 'y', 'k'};

    cout << "Count of 2 in intArr: " << TotalCount(intArr, 5, 2) << endl;
    cout << "Count of 'i' in charArr: " << TotalCount(charArr, 5, 'i') << endl;
    return 0;
}