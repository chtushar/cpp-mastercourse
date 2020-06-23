#include <iostream>

using namespace std;

int sum(int a[], int i, int n)
{

    if (i == n)
    {
        return 0;
    }

    //recursive case
    int b = sum(a, i + 1, n);

    return a[i] + b;
}

int main()
{

    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << sum(a, 0, n) << endl;
}