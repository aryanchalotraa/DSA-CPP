#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<string> s;
    s.push("Hello!");
    s.push("how");
    s.push("are");
    s.push("you?");
    //  while(!s.empty()){
    //   cout<<s.top()<<" "; you? are how Hello!
    //   s.pop();
    //  }
         

    
    //   while (!s.empty()) {
    //     string word = s.top();
    //     reverse(word.begin(), word.end()); 
    //     cout << word << " ";//?uoy era woh !olleh
    //     s.pop();
    // }





    stack<string>s2;
     while (!s.empty()) {
        s2.push(s.top());
        s.pop();
    }

    while (!s2.empty()) {
        string word = s2.top();
        reverse(word.begin(), word.end());  
        cout << word << " ";  //!olleh woh era ?uoy
        s2.pop();
    }

    return 0;
}