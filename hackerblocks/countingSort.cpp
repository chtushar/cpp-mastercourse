#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void countSort(vector<int> a, int m)
{

    int count[m] = {0}, result[a.size()];

    for (int i = 0; i < a.size(); i++)
    {
        ++count[a[i]];
    }

    for (int i = 1; i <= m; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < a.size(); i++)
    {
        result[count[a[i]] - 1] = a[i];
        --count[a[i]];
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{

    vector<int> a;
    int max = INT_MIN;
    long n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);

        if (max < x)
        {
            max = x;
        }
    }

    countSort(a, max);

    return 0;
}