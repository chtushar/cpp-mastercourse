#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int n, xr = 0, setBits[32] = {0}, ans = 0;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);

        for (int i = 0; i < 32; i++)
        {
            setBits[i] += x % 2;
            x /= 2;
        }
    }

    for (int i = 0; i < 32; i++)
    {
        setBits[i] = setBits[i] % 3;

        ans += setBits[i] * pow(2, i);
    }

    cout << ans << endl;

    return 0;
}