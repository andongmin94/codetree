#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     for (int i = 0; i < n; i++)
     {
          for (int j = n - i; j <= n; j++)
          {
               cout << j << ' ';
          }
          cout << '\n';
     }
}