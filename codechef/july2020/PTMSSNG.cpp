#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int **a = new int *[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = new int[2];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }
        ///////////////////////////////////////////////////

        ///////////////////////////////////////////////////
        for (int i = 0; i < n; i++)
        {
            delete[] a[i];
        }

        delete[] a;
    }

    return 0;
}