#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     double sum = 0;
     int cnt = 0;
     
     while(1)
     {
          int a;
          cin >> a;
          if (a >= 30) break;
          if (a < 20) break;
          sum += a;
          cnt ++;
     }
     cout << fixed << setprecision(2) << sum / cnt;
}