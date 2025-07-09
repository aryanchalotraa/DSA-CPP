#include <bits/stdc++.h>
using namespace std;

int main()
{
  // pair<char,int> p;
  // p.first='Ai';
  // p.second=1;
  // cout<<p.first<<endl;
  // cout<<p.second<<endl;
  pair<char, int> p[5];
  p[0].first = 'A';
  p[0].second = 1;
  p[1].first = 'A';
  p[1].second = 1;
  p[2].first = 'A';
  p[2].second = 1;
  p[3].first = 'A';
  p[3].second = 1;
  p[4].first = 'A';
  p[4].second = 1;
  p[5].first = 'A';
  p[5].second = 1;

  for (int i = 0; i < 5; i++)
  {
    cout << p[i].first << " " << p[i].second << endl;
  }

  return 0;
}