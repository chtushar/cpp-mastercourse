#include <bits/stdc++.h>

using namespace std;

char countChar(string s)
{
    int count[256] = {0};
    int max = 0;
    char res;

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
        if (max < count[s[i]])
        {
            max = count[s[i]];
            res = s[i];
        }
    }

    return res;
}

int main()
{

    string s;

    cin >> s;

    cout << countChar(s) << endl;

    return 0;
}