#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
    if (n == 0) return;

    func(n-1);
    cout << n << ' ';
}

void func2(int n)
{
    if (n == 0) return;

    cout << n << ' ';
    func2(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    func(n);
    cout << '\n';
    func2(n);
}