#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool checkState()
{

    int state[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
            }
            cout << endl;
        }
    }

    return 0;
}