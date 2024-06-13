#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, sum = 0;
     cin >> n;
     string s = "";
     
     while(n--)
     {
          int a;
          cin >> a;
          sum += a;
     }
     s = to_string(sum);
     s = s.substr(1, s.length() - 1) + s.substr(0, 1);
     cout << s;
}