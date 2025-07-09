#include <bits/stdc++.h>
using namespace std;

int main() {
    int num =20;
    int*ptr =&num;
    int **pptr =&ptr;//double pointer or pointer to pointer
    cout<<***(&pptr)<<endl;
    cout<<pptr<<endl;
    cout<<**pptr<<endl;
    cout<<***(&pptr)<<endl;
    cout<<*(&pptr)<<endl;
    cout<<*(&num)<<endl;
    cout<<**(&ptr)<<endl;
    return 0;
}