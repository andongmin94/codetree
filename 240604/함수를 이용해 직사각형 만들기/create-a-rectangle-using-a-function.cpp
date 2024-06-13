#include <bits/stdc++.h>

using namespace std;

void func(int n, int m)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
               cout << 1;
          cout << '\n';
     }
}

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, m;
     cin >> n >>  m;
     func(n, m);
}