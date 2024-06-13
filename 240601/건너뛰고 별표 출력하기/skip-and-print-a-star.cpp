#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     for (int i = 1; i <= n * 2 - 1; i++)
     {
          if (i <= n)
          {
               for (int j = 0; j < i; j++)
               {
                    cout << '*';
               }
               cout << "\n\n";
          }
          else
          {
               for (int j = 0; j < n * 2 - i; j++)
               {
                    cout << '*';
               }
               cout << "\n\n";
          }
     }
}