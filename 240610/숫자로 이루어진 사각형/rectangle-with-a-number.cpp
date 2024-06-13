#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << k++ << ' ';
            if (k == 10) k = 1;
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    func(n);
}