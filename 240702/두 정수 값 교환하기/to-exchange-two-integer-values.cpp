#include <bits/stdc++.h>

using namespace std;

void func(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    func(&a, &b);
    cout << a << ' ' <<  b;
}