#include <bits/stdc++.h>

using namespace std;

int func(int a, int b, int c)
{
    return min(a, min(b, c));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    cout << func(a, b, c);
}