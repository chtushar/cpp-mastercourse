#include <bits/stdc++.h>

using namespace std;

void sub(int *a, int n)
{
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int *a;
        cin >> n;
        a = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sub(a, n);

        delete[] a;
    }

    return 0;
}