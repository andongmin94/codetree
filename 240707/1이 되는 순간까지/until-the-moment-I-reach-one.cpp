#include <bits/stdc++.h>

using namespace std;

int func(int n, int m)
{
    if (n == 1) return m;

    if (n % 2 == 0) func(n / 2, m + 1);
    else func(n / 3, m + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << func(n, 0);
}