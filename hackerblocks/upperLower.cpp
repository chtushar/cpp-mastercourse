#include <bits/stdc++.h>

using namespace std;

int lowerBound(int *a, int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
    }

    return lowerBound(a, n, x, i + 1);
}

int upperBound(int *a, int n, int x, int i)
{
    if (i == -1)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
    }

    return upperBound(a, n, x, i - 1);
}

int main()
{

    int n, q;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int lower = lowerBound(a, n, x, 0);
        int upper = upperBound(a, n, x, n - 1);

        cout << lower << " " << upper << endl;
    }

    return 0;
}