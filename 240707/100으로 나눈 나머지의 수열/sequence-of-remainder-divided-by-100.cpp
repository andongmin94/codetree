#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if (n == 1) return 2;
    if (n == 2) return 4;

    return func(n-2) * func(n-1) % 100;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << func(n);
}