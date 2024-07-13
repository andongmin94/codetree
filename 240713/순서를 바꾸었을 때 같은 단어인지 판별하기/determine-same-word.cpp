#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    string s2;
    cin >> s >> s2;

    sort(s.begin(), s.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (i == s.length() - 1 && s[i] == s2[i]) cout << "Yes";

        if (s[i] != s2[i]) cout << "No";
    }
}