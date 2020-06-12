#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "  ";
    }
}

void printSeriesRev(int x, int y)
{
    for (int i = x; i >= y; i--)
    {
        cout << i << " ";
    }
}

void printSeries(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    //upper part
    for (int i = 0; i < n / 2 + 1; i++)
    {
        printSpaces(2 * (n / 2 - i));
        printSeriesRev(i + 1, 1);
        printSpaces(i);
        printSpaces(i - 1);
        if (i != 0)
        {
            printSeries(i + 1);
        }

        cout << endl;
    }

    //lower part
    for (int i = n / 2; i >= 1; i--)
    {

        printSpaces(2 * (n / 2 - i) + 2);
        printSeriesRev(i, 1);
        printSpaces(i - 1);
        printSpaces(i - 2);

        if (i != 1)
        {
            printSeries(i);
        }

        cout << endl;
    }

    return 0;
}