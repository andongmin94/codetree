#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int kor;
    int eng;
    int mat;

    Student(string name = "", int kor = 0, int eng = 0, int mat = 0)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    }
};

bool cmp(Student a, Student b)
{
    if (a.kor == b.kor)
    {
        if (a.eng == b.eng) return a.mat > b.mat;
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Student students[10];

    for (int i = 0; i < n ; i++)
        cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].mat;

    sort(students, students + n, cmp);

    for (int i = 0; i < n ; i++)
        cout << students[i].name << ' ' << students[i].kor << ' ' << students[i].eng << ' ' << students[i].mat << '\n';
}