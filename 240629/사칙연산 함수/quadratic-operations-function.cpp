#include <bits/stdc++.h>

using namespace std;

void func(int a, char o, int c)
{
    if (o == '+')
    {
        cout << a << " + " << c << " = " << a + c;
    }
    else if (o == '-')
    {
        cout << a << " - " << c << " = " << a - c;
    }
    else if (o == '/')
    {
        cout << a << " / " << c << " = " << a / c;
    }
    else if (o == '*')
    {
        cout << a << " * " << c << " = " << a * c;
    }
    else cout << "False";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, c;
    char o;
    cin >> a >> o >> c;
    func(a, o ,c);
}