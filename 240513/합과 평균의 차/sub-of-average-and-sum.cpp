#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << '\n' << (a + b + c) / 3 << '\n' << (a + b + c) - ((a + b + c) / 3);
}