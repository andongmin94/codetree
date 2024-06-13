#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;

     int a = 1;
     int cnt = 0;
     
     while (n > 1)
     {
          n = n / a++;
          cnt++;
     }
     cout << cnt;
}