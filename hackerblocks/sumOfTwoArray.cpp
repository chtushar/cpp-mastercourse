#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a = "", b = "", ansString;
    int n, m, ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.append(s);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        b.append(s);
    }

    ans = stoi(a, nullptr, 10) + stoi(b, nullptr, 10);
    ansString = to_string(ans);

    for (int i = 0; i < ansString.length(); i++)
    {
        cout << ansString[i] << ", ";
    }
    cout << "END" << endl;

    return 0;
}