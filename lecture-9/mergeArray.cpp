/* Two sorted arrays are given we have to merge it keeping them sorted
without using sorting or third array*/

#include <iostream>

using namespace std;

int main()
{

    int x[1000];
    int y[1000];

    int m, n;

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (x[i] < y[j])
        {
            x[k] = y[j];
            k--;
            j--;
        }
        else
        {
            x[k] = x[i];
            k--;
            i--;
        }
    }

    while (j >= 0)
    {
        x[k] = y[j];
        j--;
        k--;
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}