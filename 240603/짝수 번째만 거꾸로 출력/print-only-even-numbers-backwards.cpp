#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s;
     cin >> s;

     for (int i = s.length() - 1; i >= 0; i--)
     {
          if (i % 2 != 0) cout << s[i];
     }
}