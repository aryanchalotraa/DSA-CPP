#include<iostream>

#include<stack>

#include<string>

using namespace std;

int main(){

 stack<string> s;

 string m="Hello! How are you?";

 string word="";

 for(int i=0;i<m.length();i++){

  if(m[i]!=' '){

   word+=m[i];

  }

  else{

   s.push(word);

   word="";

  }

 }

 s.push(word);

while(!s.empty()){

 cout<<s.top()<<endl;

 s.pop();

}

return 0;

} 


 #include<iostream>

#include<stack>

#include<string>

using namespace std;

int main(){

 stack<string> s;

 string m="Hello! How are you?";

 string word="";

 for(int i=0;i<m.length();i++){

  if(m[i]!=' '){

   word+=m[i];

  }

  else{

   s.push(word);

   word="";

  }

 }

 s.push(word);

while(!s.empty()){

 cout<<s.top()<<endl;

 s.pop();

}

return 0;}

