#include <iostream>
#include <format>
#include<print>
using namespace std;
int main() {
    string name = "Aryan";
    int age = 21;
    print <<format("Hello {}, age {}\n", name, age);
}
