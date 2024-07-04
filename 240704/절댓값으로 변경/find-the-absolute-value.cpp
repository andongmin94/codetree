#include <bits/stdc++.h>

using namespace std;

void func(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) cout << arr[i] * -1 << ' ';
        else cout << arr[i] << ' ';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int arr[50] = {0,};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    func(arr, n);
}