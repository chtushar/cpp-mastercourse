#include <iostream>

using namespace std;

int main()
{

    int a[30][30], n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x, flag = 0;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == a[i][j])
            {
                flag = 1;
            }
        }
    }

    cout << flag << endl;

    return 0;
}