#include <iostream>

using namespace std;

int main()
{

    int m, n, a[10][10];

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                cout << a[j][i] << ", ";
            }
            else
            {
                cout << a[n - 1 - j][i] << ", ";
            }
        }
    }

    cout << "END" << endl;
    return 0;
}