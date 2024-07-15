#include <bits/stdc++.h>

using namespace std;

class User
{
public:
    string name;
    string home;
    string nation;

    User(string name = "", string home = "", string nation = "")
    {
        this->name = name;
        this->home = home;
        this->nation = nation;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    User user[10];
    for (int i = 0; i < n; i++)
    {
        cin >> user[i].name >> user[i].home >> user[i].nation;
    }
    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (user[i].name > user[idx].name)
            idx = i;
    }
    cout << "name " << user[idx].name << endl;
    cout << "addr " << user[idx].home << endl;
    cout << "city " << user[idx].nation << endl;
}