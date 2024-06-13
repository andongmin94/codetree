#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string a, b;
     cin >> a >> b;

     int cnt = 0;

     for (int i = 0; i < a.length() - 1; i++)
     {
          if (a[i] == b[0] && a[i+1] == b[1]) cnt++;
     }

     cout << cnt;
}