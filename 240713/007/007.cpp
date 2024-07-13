#include <bits/stdc++.h>

using namespace std;

class Object
{
public :
    string s;
    char c;
    int n;

    Object(string s, char c, int n)
    {
        this->s = s;
        this->c = c;
        this->n = n;
        cout << "secret code : " << s << '\n';
        cout << "meeting point : " << c << '\n';
        cout << "time : " << n << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    char c;
    int n;
    cin >> s >> c >> n;
    Object a(s,c,n);
}