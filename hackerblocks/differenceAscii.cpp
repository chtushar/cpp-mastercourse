#include <bits/stdc++.h>

using namespace std;

void difference(string s, int i)
{

    int length = s.length();

    cout << s[i];
    if (i == s.length() - 1)
    {
        return;
    }

    int x = s[i + 1] - s[i];

    cout << x;

    difference(s, i + 1);
}

int main()
{
    string s;
    cin >> s;

    difference(s, 0);

    return 0;
}