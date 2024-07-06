#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if (n <= 2) return 1;
    return func(n - 2) + func(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << func(n);
}