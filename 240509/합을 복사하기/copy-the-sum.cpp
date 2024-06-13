#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 1, b = 2, c = 3;

    int sum = a + b + c;

    a = b = c = sum;
    cout << a << ' ' << b << ' ' << c;
}