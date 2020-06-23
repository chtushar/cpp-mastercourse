#include <bits/stdc++.h>

using namespace std;

bool isSorted(int *a, int n)
{

    //base
    if (n == 1 || n == 0)
    {
        return true;
    }

    if (a[n - 1] < a[n - 2])
    {
        return false;
    }

    return isSorted(a, n - 1);
}

int main()
{

    int n, a[10000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << boolalpha << isSorted(a, n) << endl;

    return 0;
}