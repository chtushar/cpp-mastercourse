#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool swapThem(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);

    return xy < yx;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (swapThem(a[i], a[j]))
                {
                    swap(a[i], a[j]);
                }
            }
        }

        string ans = "";

        for (int i = 0; i < a.size(); i++)
        {
            ans.append(a[i]);
        }

        cout << ans << endl;
    }

    return 0;
}