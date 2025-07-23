#include <bits/stdc++.h>
#define size 5
using namespace std;
class dequeue{
  public:
  int arr[size];
  int f=-1;
  int r =-1;
  bool isEmpty(){
    if(f==-1) return true;
    else  return false;
  }
    bool isFull(){
          if( f==0&& r==size-1)||(f==r+1) return true;
          else return false;
    }
    void insertFromt(int val){
      if(isFull()) return ;
      if(isEmpty()) 
      {
        f=r= 0;

      }else if(f==0)
      f= size-1;
      else f--;
      arr[f]=val;   
    }
    void insertRear(int val){
      if(isFull()) return;
      if(isEmpty())f=r=0;
      else if(r==size-1 ) r=0;
      else r++;
      arr[r]=val;
    }
    void deleteFront(){
      if(isEmpty()) return ;

    }
};
int main() {
    
    return 0;
}
