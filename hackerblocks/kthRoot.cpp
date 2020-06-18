#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, ans = 0;
        cin >> n >> k;

        long long s = 1, e = n;

        while (s <= e)
        {
            long long mid = (s + e) / 2;
            if (pow(mid, k) <= n)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}