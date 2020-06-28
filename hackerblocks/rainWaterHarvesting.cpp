#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], lm[n] = {0}, rm[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //left
    int left_max = a[0];
    for (int i = 1; i < n; i++)
    {
        lm[i] = left_max;
        left_max = max(left_max, a[i]);
    }

    //right
    int right_max = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rm[i] = right_max;
        right_max = max(right_max, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if ((min(lm[i], rm[i]) - a[i]) > 0)
        {
            ans += (min(lm[i], rm[i]) - a[i]);
        }
    }

    cout << ans << endl;

    return 0;
}