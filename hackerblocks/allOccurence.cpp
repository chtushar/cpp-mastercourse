#include <bits/stdc++.h>

using namespace std;

void allOccurence(int *a, int i, int n, int key)
{

    //base
    if (i == n)
    {
        return;
    }

    //rec

    if (a[i] == key)
    {
        cout << i << " ";
    }

    allOccurence(a, i + 1, n, key);
}

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    allOccurence(a, 0, n, key);
    cout << endl;

    return 0;
}