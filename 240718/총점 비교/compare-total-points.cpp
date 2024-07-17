#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int a, b, c;

    Student(string name = "", int a = 0, int b = 0, int c = 0)
    {
        this->name = name;
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool cmp(Student a, Student b)
{
    return a.a + a.b + a.c < b.a + b.b + b.c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    Student students[10];

    for (int i = 0; i < n; i++)
        cin >> students[i].name >> students[i].a >> students[i].b >> students[i].c;

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
        cout << students[i].name << ' ' << students[i].a << ' ' << students[i].b << ' ' << students[i].c << '\n';
}