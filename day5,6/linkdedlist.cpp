//it is both dattype and data structure    

#include <bits/stdc++.h>
using namespace std;
//malloc(): malloc stands for memory allocation , it allocate memory dyanmically.
//it allocote memory in bytes
//we have to pass number of bytes we need to allocate dyanmically
//ut return null in case of fail to alllocate memory
//it allocate contigious number of block
//it return void pointer,so need to type cast it. wide pointer
//it define inside <stdlib.h> header file

int main() {
  int *ptr = (int *)malloc(sizeof(int)*5);//int * ->type cast//it return address so need pointer to store
  if(ptr!=NULL){
    cout<<"memeoryt allocated sucessfully";

  }    else
  cout<<"fail to allocate";
  for(auto i=0;i<5;i++){
    
  }
  //  ptr[0]=0;
  //  ptr[1]=3;
  //  ptr[2]=1;
  //  ptr[3]=5;
   cout<<*ptr;
  //    for(int i=0;i<5;i++){
  //     cout<<"Arr";
  //     cin>>ptr[i];
  //  }  
  //  for(int i=0;i<5;i++){
  //   cout<<ptr[i]<<endl;//subscript operaor
  //  }  
  for(int i=0;i<5;i++){
    cout<<"Arr";
      cin>>*(ptr+i);
   }  
 for(int i=0;i<5;i++){
    
      cout<<*(ptr+i);
   }  
  free(ptr); //use to deallocate memeory from the 
  ptr=NULL;//it is used to avoid dangling pointer
    return 0;
}