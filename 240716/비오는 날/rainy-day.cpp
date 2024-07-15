#include <bits/stdc++.h>

using namespace std;

class Rainy
{
public:
    string day;
    string week;
    string sky;

    Rainy(string day = "", string week = "", string sky = "")
    {
        this->day = day;
        this->week= week;
        this->sky = sky;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Rainy rainy[100];
    for (int i = 0; i < n; i++)
    {
        cin >> rainy[i].day >> rainy[i].week >> rainy[i].sky;
    }

    int idx = 0;
    string s = "9999-99-99";
    for (int i = 1; i < n; i++)
    {
        if (rainy[i].sky == "Rain" && rainy[i].day < s)
        {
            s = rainy[i].day;
            idx = i;
        }
    }
    cout << rainy[idx].day << ' ' << rainy[idx].week << ' ' << rainy[idx].sky;
}