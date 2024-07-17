#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    string name;
    int height;
    float weight;

    Human(string name = "", int height = 0, float weight = 0)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmpName(Human a, Human b)
{
    return a.name < b.name;
}

bool cmpHeight(Human a, Human b)
{
    return a.height > b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Human mans[5];

    for (int i = 0; i < 5; i++)
        cin >> mans[i].name >> mans[i].height >> mans[i].weight;

    sort(mans, mans + 5, cmpName);

    cout << "name\n";
    for (int i = 0; i < 5; i++)
        cout << mans[i].name << ' ' <<  mans[i].height << ' ' << mans[i].weight << "\n";

    sort(mans, mans + 5, cmpHeight);
    cout << "\nheight\n";
    cout << fixed << setprecision(1);
    for (int i = 0; i < 5; i++)
        cout << mans[i].name << ' ' <<  mans[i].height << ' ' << mans[i].weight << "\n";
}