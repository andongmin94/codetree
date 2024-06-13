#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a = 5;

     while(a--)
     {
          int b;
          cin >> b;

          if (b % 3 != 0) break;
     }

     if (a == -1) cout << 1;
     else cout << 0;
}