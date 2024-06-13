#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     char c;
     cin >> c;
     if (c == 'a') c += 26;

     cout << static_cast<char>(c - 1);
}