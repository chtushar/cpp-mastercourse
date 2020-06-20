#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        int n, max = INT_MIN, temp = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            temp = temp + a[i];
            if (max < temp)
            {
                max = temp;
            }
            if (temp < 0)
            {
                temp = 0;
            }
        }

        cout << max << endl;
    }
}