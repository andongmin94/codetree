#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     vector<string> v(n);

     for (int i = 0; i < n; i++)
     {
          if (i % 2 == 0)
          {
               for (int j = 0; j < n - (i / 2); j++)
               {
                    cout << "* ";
                    v[i] += "* ";
               }
               cout << '\n';
          }
          else
          {
               for (int j = 0; j < (i / 2) + 1; j++)
               {
                    cout << "* ";
                    v[i] += "* ";
               }
               cout << '\n';
          }
     }
     for (int i = v.size() - 1; i >= 0; i--)
     {
          cout << v[i] << '\n';
     }
}