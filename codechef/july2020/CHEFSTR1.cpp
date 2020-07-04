#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, prev, ans = 0;
        cin >> n;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (i != 0)
            {
                ans += x > prev ? (x - prev - 1) : (prev - x - 1);
            }
            prev = x;
        }

        cout << ans << endl;
    }
}