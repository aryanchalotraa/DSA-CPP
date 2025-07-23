#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> mp; 
    mp["Aryan"] = 5;     
    mp["Anurag"] = 6;
    mp["Ashish"] = 9;
    
    
    mp.insert({"abhi", 1});
    mp.insert({"Abhinav",17});
    for (auto i : mp) {
        cout << i.first << "\t" << i.second << endl; 
    }

    return 0;
}
