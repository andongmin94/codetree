#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s;
     cin >> s;
     bool k = true;

     for (auto e : s)
     {
          if (e == 'e' && k)
          {
               k = false;
          }
          else cout << e;
     }
}