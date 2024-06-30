#include <bits/stdc++.h>

using namespace std;

int LastDayNumber(int y, int m) {
    if(y % 4 == 0 && y % 100 != 0 && m == 2)
        return 29;
    if(m == 2)
        return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}

bool JudgeDay(int y, int m, int d) {
    if(m <= 12 && d <= LastDayNumber(y, m))
        return true;
    
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, m, d;
    cin >> y >> m >> d;
    
    if(JudgeDay(y, m, d))
    {
        if (3 <= m && m <= 5) cout << "Spring";
        if (6 <= m && m <= 8) cout << "Summer";
        if (9 <= m && m <= 11) cout << "Fall";
        if (12 == m || m <= 2) cout << "Winter";
    }
    else
        cout << "-1";
}