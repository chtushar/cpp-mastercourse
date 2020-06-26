#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, unique;
    vector<int> a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    unique = a[0];

    for (int i = 1; i < a.size(); i++)
    {
        unique = unique ^ a[i];
    }

    cout << unique << endl;

    return 0;
}