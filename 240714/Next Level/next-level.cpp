#include <bits/stdc++.h>

using namespace std;

class User
{
public:
    string id;
    int level;

    User(string id = "codetree", int level = 10)
    {
        this->id = id;
        this->level = level;
        cout << "user " << id << " lv " << level << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> s >> n;
    User user = User();
    User user2 = User(s, n);
}