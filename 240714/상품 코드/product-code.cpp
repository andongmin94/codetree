#include <bits/stdc++.h>

using namespace std;

class Product
{
public:
    Product(string name, int code)
    {
        cout << "product 50 is codetree\n";
        cout << "product " << code << " is " << name;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> s >> n;
    Product(s, n);
}