#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1000], key, maxIndex, max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (max < a[i])
        {
            max = a[i];
            maxIndex = i;
        }
    }

    cout << maxIndex << endl;

    return 0;
}