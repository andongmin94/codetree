#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     constexpr int a = 10;
     int b[a] = {0,};

     for (int i = 0; i < a; i++)
     {
          cin >> b[i];
          if (b[i] % 3 == 0)
          {
               cout << b[i - 1];
               break;
          }
     }
}