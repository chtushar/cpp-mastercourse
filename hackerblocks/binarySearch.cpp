#include <iostream>

using namespace std;

int binarySearch(long a[], int n, int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e / 2);

        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            e = mid - 1;
            continue;
        }
        else
        {
            s = mid + 1;
            continue;
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

    cout << binarySearch(a, n, k) << endl;

    return 0;
}