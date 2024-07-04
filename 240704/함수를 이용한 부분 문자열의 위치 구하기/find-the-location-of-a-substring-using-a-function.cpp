#include <bits/stdc++.h>

using namespace std;

void func(string s, string t)
{
    bool che = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0])
        {
            bool check = true;
            for (int j = 0; j < t.length(); j++)
            {
                if (s[i + j] != t[j])
                    check = false;
            }
            if (check)
            {
                cout << i;
                che = false;
                break;
            }
        }
    }
    if(che) cout << -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    func(s, t);
}