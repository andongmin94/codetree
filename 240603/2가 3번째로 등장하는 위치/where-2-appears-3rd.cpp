#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, cnt = 0;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          int a;
          cin >> a;
          if (a == 2) cnt++;
          if (cnt == 3)
          {
               cout << i;
               break;
          }
     }
}