#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s;
     cin >> s;

     for(auto e : s)
     {
          if (e < 'a') cout << static_cast<char>(e - 'A' + 'a');
          else cout << static_cast<char>(e - 'a' + 'A');
     }
}