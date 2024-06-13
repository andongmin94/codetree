#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 5, b = 6, c = 7;
    int temp_b = b, temp_c = c;

    b = a;
    c = temp_b;
    a = temp_c;

    cout << a << '\n' << b << '\n' << c;
}