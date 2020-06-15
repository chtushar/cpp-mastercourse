#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int r = 0, c = 0;
    while (r < m && c < n)
    {
        for (int i = c; i < n; i++)
        {
            cout << a[r][i] << ", ";
        }
        r++;
        for (int i = r; i < m; i++)
        {
            cout << a[i][n - 1] << ", ";
        }
        n--;

        if (r < m)
        {
            for (int i = n - 1; i >= c; i--)
            {
                cout << a[m - 1][i] << ", ";
            }
            m--;
        }

        if (c < n)
        {
            for (int i = m - 1; i >= r; i--)
            {
                cout << a[i][c] << ", ";
            }
            c++;
        }
    }
    cout << "END";
    return 0;
}
