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
          for (int j = n; j > 0; j--)
          {
               cout << j * (i + 1) << ' ';
          }
          cout << '\n';
     }
}