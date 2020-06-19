#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *a, int s, int e, int k)
{

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, key, maxIndex, max = INT_MIN;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (max < a[i])
        {
            max = a[i];
            maxIndex = i;
        }
    }

    cin >> key;

    if (key == max)
    {
        cout << maxIndex << endl;
    }
    else if (key < max && key <= a[n - 1])
    {
        int s = maxIndex + 1;
        int e = n - 1;

        cout << binarySearch(a, s, e, key) << endl;
    }
    else if (key < max && key >= a[0])
    {
        int s = 0;
        int e = maxIndex;

        cout << binarySearch(a, s, e, key) << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}