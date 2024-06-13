#include <bits/stdc++.h>

using namespace std;

bool checker(int y)
{
    if (y % 100 == 0 && y % 400 != 0)
        return false;
    
    if (y % 4 == 0)
        return true;
    
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;

    if (checker(y)) cout << "true";
    else cout << "false";
}