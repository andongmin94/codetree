#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    a += 8;
    b *= 3;
    cout << a << '\n' << b << '\n' << a * b;
}