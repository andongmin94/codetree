#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s, s2, s3;
     cin >> s >> s2 >> s3;
     cout << max(s.length(), max(s2.length(), s3.length()))
     - min(s.length(), min(s2.length(), s3.length()));
}