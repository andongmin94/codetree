#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n - (i - 1); j++)
          {
               cout << i << " * " << j << " = " << i * j;
               if (j != n - (i - 1)) cout << " / ";
          }
          cout << '\n';
     }
}