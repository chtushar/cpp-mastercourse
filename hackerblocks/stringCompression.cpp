#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    char prev = s[0];
    int count = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] != prev)
        {
            cout << prev << count;
            prev = s[i];
            count = 1;
        }
        else
        {
            count++;
        }
    }

    return 0;
}