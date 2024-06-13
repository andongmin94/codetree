#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     int cnt = 0;
     while(n < 1000)
     {
          if (n % 2 == 0)
          {
               n = n * 3 + 1;
               cnt++;
          }
          else
          {
               n = n * 2 + 2;
               cnt++;
          }
     }
     cout << cnt;
}