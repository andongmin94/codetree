#include <bits/stdc++.h>

using namespace std;

class Member
{
public:
    char name;
    int score;

    Member(char name = ' ', int score = 0)
    {
        this->name = name;
        this->score = score;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int idx = 0, min = 100;
    Member members[5];
    for (int i = 0; i < 5; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        members[i].name = a;
        members[i].score = b;
        if (min > b)
        {
            idx = i;
            min = b;
        }
    }

    cout << members[idx].name << ' ' << members[idx].score;
}