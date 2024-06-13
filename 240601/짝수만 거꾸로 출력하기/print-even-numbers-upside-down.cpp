#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n;
     cin >> n;
     vector<int> v(n);

     for(int i = 0; i < n; i++)
     {
          cin >> v[i];
     }
     for (int i = v.size() - 1; i >= 0; i--)
     {
          if (v[i] % 2 == 0) cout << v[i] << ' ';
     }
}