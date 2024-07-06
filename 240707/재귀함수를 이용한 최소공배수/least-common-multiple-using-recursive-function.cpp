#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k = 1;
    while(true)
    {
        bool a = false;
        int b = 0;
        for (auto e : v)
        {
            if (k % e == 0) b++;
        }
        if (b == n) break;
        k++;
    }
    cout << k;
}