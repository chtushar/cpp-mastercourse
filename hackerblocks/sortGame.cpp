#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    void inputs(string n, int m)
    {
        name = n;
        marks = m;
    }
};

void sorting(Student *a, int n)
{
}

int main()
{
    int x, t, n = 0;
    cin >> x;
    cin >> t;
    Student a[100000];

    for (int i = 0; i < t; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        if (num > x)
        {
            a[i].inputs(s, num);
            n++;
        }
    }

    cout << t << endl;

    sorting(a, n);

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     int n;
//     cin >> n;
//     map<int, set<string>, greater<int>> freq;
//     string str;
//     int sal;
//     for (auto i = 0; i < n; ++i)
//     {
//         cin >> str;
//         cin >> sal;
//         if (sal >= x)
//             freq[sal].insert(str);
//     }
//     for (auto i : freq)
//     {
//         for (auto j : i.second)
//             cout << j << ' ' << i.first << endl;
//     }
//     return 0;
// }