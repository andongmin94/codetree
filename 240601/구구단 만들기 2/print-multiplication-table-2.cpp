#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;

     for (int i = 2; i <= 8; i += 2)
     {
          for (int j = b; j >= a; j--)
          {
               cout << j << " * " << i << " = " << j * i;
               if (j != a) cout << " / ";
          }
          cout << '\n';
     }
}