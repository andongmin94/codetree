#include <bits/stdc++.h>

using namespace std;

int countPrime(int a, int b)
{
    int sum = 0;
    if (a == 2) sum += 2;

    for (int i = a; i <= b; i++)
    {
        bool prime = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) break;

            if (j == i - 1) prime = true;
        }
        if (prime) sum += i;
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << countPrime(a, b);
}