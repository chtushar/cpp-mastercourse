#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int a = s[i] - 48;
        if (a >= 5)
        {
            a = 9 - a;
        }

        s.replace(i, 1, to_string(a));
    }
    if (s.size() != 1)
    {
        s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
    }
    cout << s;

    return 0;
}