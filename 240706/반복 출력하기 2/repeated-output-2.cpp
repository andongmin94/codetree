#include <bits/stdc++.h>

using namespace std;

int func(int n)
{
    if (n > 0)
        cout << "HelloWorld\n";
    else return 0;
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