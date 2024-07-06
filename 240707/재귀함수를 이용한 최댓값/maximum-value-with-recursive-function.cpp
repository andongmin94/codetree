#include <bits/stdc++.h>

using namespace std;

int func(int n, int m)
{
    if (n == 0) return m;
    int k;
    cin >> k;
    if (m < k) m = k;

    return func(n - 1, m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << func(n, 0);
}