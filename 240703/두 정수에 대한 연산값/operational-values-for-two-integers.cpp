#include <bits/stdc++.h>

using namespace std;

void func(int& a, int& b)
{
    if (a > b)
    {
        a += 25;
        b *= 2;
    }
    else
    {
        b += 25;
        a *= 2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    func(a, b);
    cout << a << ' ' << b;
}