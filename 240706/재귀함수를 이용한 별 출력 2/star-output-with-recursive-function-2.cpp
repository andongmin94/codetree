#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
    if (n == 0) return;
    for (int i = 0; i < n; i++)
        cout << "* ";
    cout << '\n';
    func(n - 1);
    for (int i = 0; i < n; i++)
        cout << "* ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    func(n);
}