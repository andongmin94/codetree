#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 && v[i] == v2[i]) cout << "Yes";

        if (v[i] != v2[i])
        {
            cout << "No";
            break;
        }
    }
}