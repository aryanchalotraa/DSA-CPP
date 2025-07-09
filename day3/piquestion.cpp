#include <bits/stdc++.h>
using namespace std;

void Printpi(string str) {
    if (str.length() == 0) {
        return; // Base case
    }

    if (str.length() >= 2 && str[0] == 'p' && str[1] == 'i') {
        cout << "3.14";
        Printpi(str.substr(2)); // Skip "pi"
    } else {
        cout << str[0];
        Printpi(str.substr(1)); // Move one character ahead
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Printpi(input);
    return 0;
}
