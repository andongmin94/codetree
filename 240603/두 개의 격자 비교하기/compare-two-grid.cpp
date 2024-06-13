#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int arr[10][10];
     int n, m;
     cin >> n >> m;

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
               cin >> arr[i][j];
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               int v;
               cin >> v;
               if (v == arr[i][j]) arr[i][j] = 0;
               else arr[i][j] = 1;
               cout << arr[i][j] << ' ';
          }
          cout << '\n';
     }
}