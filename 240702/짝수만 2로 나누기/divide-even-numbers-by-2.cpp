#include <bits/stdc++.h>

using namespace std;

void func(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            arr[i] /= 2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[50];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    func(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}