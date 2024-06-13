#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a = 2;
     string s = "";
     int k = 0;

     while(a--)
     {
          string b;
          cin >> b;
          for (auto e : b)
          {
               if (e >= '0' && e <= '9') s += e;
          }
          k += stoi(s);
          s = "";
     }
     cout << k;
}