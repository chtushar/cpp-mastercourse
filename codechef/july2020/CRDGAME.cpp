#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll powerOfDigit(ll n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + powerOfDigit(n / 10);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, prev, c = 0, m = 0;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;

            if (powerOfDigit(x) > powerOfDigit(y))
            {
                ++c;
            }
            else if (powerOfDigit(y) > powerOfDigit(x))
            {
                ++m;
            }
            else
            {
                ++c;
                ++m;
            }
        }

        if (c > m)
        {
            cout << 0 << " " << c << endl;
        }
        else if (m > c)
        {
            cout << 1 << " " << m << endl;
        }
        else
        {
            cout << 2 << " " << c << endl;
        }
    }
}