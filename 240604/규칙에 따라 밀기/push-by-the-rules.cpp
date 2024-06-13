#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s;
     cin >> s;
     string c;
     cin >> c;

     for (auto e: c)
     {
          if (e == 'L')
          {
               s = s.substr(1, s.length() - 1) + s.substr(0, 1);
          }
          if (e == 'R')
          {
               s = s.substr(s.length() - 1, 1) + s.substr(0, s.length() - 1);
          }
     }
     cout << s;
}