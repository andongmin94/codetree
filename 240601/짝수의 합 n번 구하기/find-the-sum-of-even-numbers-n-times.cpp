#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     while(n--)
     {
          int a, b, sum = 0;
          cin >> a >> b;

          for (int i = a; i <= b; i++)
          {
               if (i % 2 == 0) sum += i;
          }

          cout << sum << '\n';
     }
}