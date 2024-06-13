#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b, sum = 0;
     cin >> a >> b;

     int c[10] = { 0, };
     while(a > 1)
     {
          c[a % b]++;
          a /= b;
     }

     for (int i = 0; i < 10; i++)
     {
          if (c[i] != 0)
          {
               sum += static_cast<int>(pow(c[i], 2));
          }
     }
     cout << sum;
}