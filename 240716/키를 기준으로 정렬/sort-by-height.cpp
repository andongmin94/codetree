#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    string name;
    int height;
    int age;

    Human(string name = "", int height = 0, int age = 0)
    {
        this->name = name;
        this->height = height;
        this->age = age;
    }
};

bool cmp(Human a, Human b)
{
    return a.height < b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Human humans[10];

    for (int i = 0; i < n; i++)
        cin >> humans[i].name >> humans[i].height >> humans[i].age;

    sort(humans, humans + n, cmp);

    for (int i = 0; i < n; i++)
        cout << humans[i].name << ' ' << humans[i].height << ' ' << humans[i].age << '\n';
}