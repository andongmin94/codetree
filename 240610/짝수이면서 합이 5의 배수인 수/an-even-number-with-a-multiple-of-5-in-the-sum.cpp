#include <bits/stdc++.h>

using namespace std;

bool func(int n)
{
    if (n % 2 == 0 && (n % 10 + n / 10) % 5 == 0)
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (func(n)) cout << "Yes";
    else cout << "No";
}