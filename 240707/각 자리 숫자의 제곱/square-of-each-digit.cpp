#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if(n < 10)
        return n * n;
    return func(n / 10) + (n % 10) * (n % 10);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << func(n);
}