#include <bits/stdc++.h>

using namespace std;

class Bomb
{
public:
    string code;
    char color;
    int second;

    Bomb(string code, char color, int second)
    {
        this->code = code;
        this->color = color;
        this->second = second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    Bomb bomb(a, b, c);
    cout << "code : " << bomb.code << '\n' << "color : " << bomb.color << '\n' << "second : " << bomb.second;
}