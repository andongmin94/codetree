#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s, s2, s3;
     getline(cin, s);
     getline(cin, s2);
     s3 = s + s2;
     for (auto e : s3)
     {
          if (e != ' ') cout << e;
     }
}