#include <bits/stdc++.h>

using namespace std;

int lcs(string s1, string s2, int l, int m)
{

    int table[l + 1][m + 1];
    int i, j;

    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                table[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
            }
            else
            {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }

    return table[l][m];
}

int main()
{

    string s1, s2;

    cin >> s1;
    cin >> s2;

    int l = s1.length();
    int m = s2.length();

    int length = lcs(s1, s2, l, m);

    if (length >= 0.5 * m)
    {
        cout << "Valid Nominee" << endl;
    }
    else
    {
        cout << "Not a valid nominee" << endl;
    }

    return 0;
}