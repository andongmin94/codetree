#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, value = 1000;
     cin >> n;
     int arr[10] { 0, };
     for (int i = 0; i < n; i++)
          cin >> arr[i];
     for (int i = 0; i < n - 1; i++)
     {
          if (value > arr[i+1] - arr[i]) value = arr[i+1] - arr[i];
     }
     cout << value;
}