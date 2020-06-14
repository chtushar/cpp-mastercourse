#include <iostream>

using namespace std;

int binarySearch(long arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
        {
            return m;
        }

        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    long a[1000000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    cout << binarySearch(a, 0, n - 1, k) << endl;

    return 0;
}