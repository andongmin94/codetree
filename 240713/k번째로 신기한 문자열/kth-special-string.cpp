#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string t;
    cin >> n >> k >> t;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < t.length(); j++)
        {
            if (s[j] != t[j]) break;

            if (j == t.length() - 1 && s[j] == t[j])
                v.push_back(s);
        }
    }

    sort(v.begin(), v.end());

    cout << v[k-1];
}