#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     vector<string> v(n);

     for (int i = 0; i < n; i++)
          cin >> v[i];

     char c;
     int cnt = 0;
     cin >> c;
     double res = 0;

     for (string e : v)
     {
          if (e[0] == c)
          {
               res += static_cast<double>(e.length());
               cnt++;
          }
     }

     cout << cnt;
     cout << fixed << setprecision(2) << ' ' << res / cnt;
}