#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string a, b;
     cin >> a >> b;

     if ((a + b) == (b + a)) cout << "true";
     else cout << "false";
}