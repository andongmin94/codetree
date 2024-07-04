#include <bits/stdc++.h>

using namespace std;

void func(int m, int* arr)
{
    int cnt = 0;
    while(m > 1)
    {
        cnt += arr[m-1];
        if (m % 2 == 0) m /= 2;
        else m -= 1;
    }
    cnt += arr[0];
    cout << cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    func(m, arr);
}