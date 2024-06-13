#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int arr[4][4] = { 0, };
     int sum = 0;
     for (int i = 0; i < 4; i++)
     {
          for (int j = 0; j < 4; j++)
          {
               cin >> arr[i][j];
               if (j <= i) sum += arr[i][j];
          }
     }
     cout << sum;
}