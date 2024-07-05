#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
    if (n > 0)
        cout << "HelloWorld\n";
    else return;
    func(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    func(n);
}