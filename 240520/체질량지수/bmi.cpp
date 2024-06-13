#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, b;
    cin >> h >> w;
    b = 10000 * w / h / h;
    cout << b << '\n';
    if (b >= 25) cout << "Obesity";
}