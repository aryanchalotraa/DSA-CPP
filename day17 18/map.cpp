#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp; // Corrected to store string keys and int values
    mp["Aryan"] = 5;     // Inserting key-value pair using square brackets
    mp["Anurag"] = 6;
    mp["Ashish"] = 9;
    
    // Inserting key-value pair using insert method
    mp.insert({"abhi", 1});
    mp.insert({"Abhinav",17});
    for (auto i : mp) {
        cout << i.first << "\t" << i.second << endl; // Accessing key and value using i.first and i.second
    }

    return 0;
}
