#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[100000], max = INT_MIN;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (max < a[i])
        {
            max = a[i];
        }
    }

    cout << max << endl;

    return 0;
}