#include <bits/stdc++.h>

using namespace std;

int func(int a, int b)
{
    int cnt = 0;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0) continue;
        if (i % 10 == 5) continue;
        if (i % 3 == 0 && i % 9 != 0) continue;

        cnt++;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << func(a, b);
}