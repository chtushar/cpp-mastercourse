#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int ar[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }
    int r = 0, c = 0;
    while (r < m && c < n)
    {
        for (int i = r; i < m; i++)
        {
            cout << ar[i][c] << ", ";
        }
        c++;
        for (int j = c; j < n; j++)
        {
            cout << ar[m - 1][j] << ", ";
        }
        m--;
        if (c < n)
        {
            for (int i = m - 1; i >= r; i--)
            {
                cout << ar[i][n - 1] << ", ";
            }
        }
        n--;
        if (r < m)
        {
            for (int j = n - 1; j >= c; j--)
            {
                cout << ar[r][j] << ", ";
            }
        }
        r++;
    }
    cout << "END";
    return 0;
}
