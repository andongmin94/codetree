#include <bits/stdc++.h>

using namespace std;

void func(int& a, int& b)
{
    if (a > b)
    {
        a *= 2;
        b += 10;
    }
    else
    {
        b *= 2;
        a += 10;
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