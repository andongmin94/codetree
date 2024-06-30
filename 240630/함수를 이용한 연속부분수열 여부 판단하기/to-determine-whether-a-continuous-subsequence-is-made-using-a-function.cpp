#include <bits/stdc++.h>

using namespace std;

bool A(int a, int b)
{
    vector<int> v1(a);
    vector<int> v2(b);

    for (int i = 0; i < a; i++)
        cin >> v1[i];
    for (int i = 0; i < b; i++)
        cin >> v2[i];
    for (int i = 0; i <= a - b; i++)
    {
        if (v1[i] == v2[0])
        {
            int cnt = 0;
            for (int j = 0; j < v2.size(); j++)
            {
                if (v1[i + j] == v2[j]) cnt++;
            }
            if (cnt == v2.size()) return true;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (A(a, b)) cout << "Yes";
    else cout << "No";
}