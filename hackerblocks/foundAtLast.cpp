#include <bits/stdc++.h>

using namespace std;

int upperBound(long *a, int n, int x, int i)
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
    int n;
    long a[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;

    cout << upperBound(a, n, x, n - 1) << endl;

    return 0;
}