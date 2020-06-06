#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " "
             << "\t";
    }
}

void printSeries(int n)
{
    for (int j = 1; j <= n; j++)
    {
        cout << j << "\t";
    }
}

void printSeriesRev(int n)
{
    for (int j = n; j >= 1; j--)
    {
        cout << j << "\t";
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        printSeries(i);
        printSpaces(n - i);
        printSpaces(n - i - 1);
        if (i != n)
        {
            printSeriesRev(i);
        }
        else
        {
            printSeriesRev(i - 1);
        }

        cout << endl;
    }
}
