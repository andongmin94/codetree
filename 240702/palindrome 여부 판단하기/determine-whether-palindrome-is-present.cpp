#include <bits/stdc++.h>

using namespace std;

bool func(string& s)
{
    string t = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        t += s[i];
    }
    if (s == t) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (func(s)) cout << "Yes";
    else cout << "No";
}