#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> s;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s.push_back(a);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        string s1 = s[i];
        string s2 = s[i + 1];

        int len1 = s1.length();
        int len2 = s2.length();

        int j = 0;

        while (s1[j] == s2[j])
        {
            len2--;
            len1--;
            j++;
        }

        if (len1 == 0)
        {
            swap(s[i], s[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}