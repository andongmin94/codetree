#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;
     
     for (int i = a; i <= b; i++)
     {
          if (1920 % i == 0 && 2880 % i == 0)
          {
               cout << 1;
               break;
          }

          if (i == b) cout << 0;
     }
}