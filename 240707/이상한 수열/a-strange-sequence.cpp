#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    return func(n/3) + func(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << func(n);
}