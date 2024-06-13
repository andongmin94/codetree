#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int size = 2 * n - 1;

    // 상단 절반
    for (int i = 0; i < n; i++) {
        // 앞 공백 출력
        for (int j = 0; j < n - 1 - i; j++) {
            cout << ' ';
        }
        // 별과 공백 출력
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j % 2 == 0) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }

    // 하단 절반
    for (int i = n - 2; i >= 0; i--) {
        // 앞 공백 출력
        for (int j = 0; j < n - 1 - i; j++) {
            cout << ' ';
        }
        // 별과 공백 출력
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j % 2 == 0) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}