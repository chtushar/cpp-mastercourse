#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void countSort(int *a, int n, int max)
{
    int result[n + 1];
    int count[max + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n; i >= 1; i--)
    {
        result[count[a[i]]] = a[i];
        count[a[i]] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = result[i];
    }
}

int main()
{

    int max = INT_MIN;
    long n;
    cin >> n;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
    }

    countSort(a, n, max);

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}