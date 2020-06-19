#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<int, string, greater<int>> e;
    int x, t;
    cin >> x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        int num;
        cin >> s >> num;

        e.insert(pair<int, string>(num, s));
    }

    for (auto &t : e)
    {
        if (t.first > x)
        {
            cout << t.second << " " << t.first << endl;
        }
    }

    return 0;
}