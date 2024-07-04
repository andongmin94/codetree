#include <bits/stdc++.h>

using namespace std;

void func(string s)
{
    int arr[26] = {0,};
    int cnt = 0;
    for (auto e : s)
        arr[e - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0) cnt++;
    }
    if (cnt != 1) cout << "Yes";
    else cout << "No";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    func(s);
}