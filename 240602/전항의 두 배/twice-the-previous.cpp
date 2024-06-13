#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int a, b;
     cin >> a >> b;
     cout << a << ' ' << b << ' ';
     int c = 3;
     while (c++ <= 10)
     {
          int temp = 2 * a + b;
          a = b;
          b = temp;
          cout << temp << ' ';
     }
}