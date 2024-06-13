#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     char a = 'A';

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (a == '[') a = 'A';
               if (j >= i) cout << a++ << ' ';
               else cout << "  ";
          }
          cout << '\n';
     }
}