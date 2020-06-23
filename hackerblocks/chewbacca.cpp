#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll digits(ll n)
{
    ll count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    ll n;
    cin >> n;

    ll d = digits(n);
    int arr[100000];

    // STORING THE NUMBER IN AN ARRAY

    for (ll i = 0; i < d; i++)
    {
        ll key = n % 10;
        arr[d - i - 1] = key;
        n = n / 10;
    }

    for (ll i = 0; i < d; i++)
    {
        if (i == 0 && (arr[i] == 9))
        {
            cout << arr[i];
        }
        else
        {
            if (arr[i] >= 5)
            {
                cout << 9 - arr[i];
            }
            else
            {
                cout << arr[i];
            }
        }
    }
    return 0;
}