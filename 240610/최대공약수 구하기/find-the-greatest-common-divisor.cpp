#include <bits/stdc++.h>

using namespace std;

void func(int n, int m)
{
    int i = n > m ? n : m;
    
    while(i)
    {
        if (n % i == 0 && m % i == 0)
        {
            cout << i;
            break;
        }
        i--;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    func(n, m);
}