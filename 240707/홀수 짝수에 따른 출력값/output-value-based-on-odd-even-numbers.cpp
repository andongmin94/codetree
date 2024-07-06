#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if (n == 1) return 1;

    if (n == 2) return 2;

    return func(n - 2) + n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << func(n);
}