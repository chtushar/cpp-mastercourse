#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "  ";
    }
}

void printSeriesRev(int n, int k)
{
    for (int i = n; i >= k; i--)
    {
        cout << i << " ";
    }
}

void printSeries(int n, int k)
{
    for (int i = k; i <= n; i++)
    {
        if (i != 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        printSeriesRev(n, n - i);
        printSpaces(2 * (n - i) - 1);
        printSeries(n, n - i);
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        printSeriesRev(n, i + 1);
        printSpaces(2 * i + 1);
        printSeries(n, i + 1);
        //cout << i + 1;
        cout << endl;
    }

    return 0;
}