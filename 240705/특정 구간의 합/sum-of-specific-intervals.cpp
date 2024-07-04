#include <bits/stdc++.h>

using namespace std;

void func(int* arr, int m)
{
    while(m--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        for (int i = a - 1; i < b; i++)
        {
            sum += arr[i];
        }
        cout << sum << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, arr[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    func(arr, m);
}