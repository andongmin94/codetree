#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int arr[10][10];
     int n, cnt = 1;
     cin >> n;
     bool dir = true;

     for (int i = n - 1; i >= 0; i--)
     {
          if (dir)
          {
               for (int j = n - 1; j >= 0; j--)
               {
                    arr[j][i] = cnt++;
               }
               dir = !dir;
          }
          else
          {
               for (int j = 0; j < n; j++)
               {
                    arr[j][i] = cnt++;
               }
               dir = !dir;
          }
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               cout << arr[i][j] << ' ';
          }
          cout << '\n';
     }
}