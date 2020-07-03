#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
//#define repi(j,n) for(int i = j ; i< n ; i++)
vector<string> v;
bool myCompare(string a, string b)
{
    if (a > b)
    {
        return true;
    }
    return false;
}

void permut(string s, string t, int i)
{
    if (s[i] == '\0')
    {
        if (myCompare(s, t))
        {
            v.push_back(s);
            // cout << s << endl ;
        }
        return;
    }

    for (int j = i; s[j] != '\0'; j++)
    {
        swap(s[i], s[j]);
        permut(s, t, i + 1);
        swap(s[i], s[j]);
    }

    return;
}

int main()
{

    string s, t;
    cin >> s;

    t = s;
    permut(s, t, 0);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
