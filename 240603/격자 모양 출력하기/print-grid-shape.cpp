#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int arr[10][10] = {0,};
     int n, m;
     cin >> n >> m;

     int temp = m;

     while(temp--)
     {
          int a, b;
          cin >> a >> b;
          arr[a-1][b-1] = a * b;
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