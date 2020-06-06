#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " \t";
    }
}

void printLine(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << n + i + 1 << "\t";
    }
    for (int i = n - 1; i > 0; i--)
    {
        cout << n + i - 1 << "\t";
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        printSpaces(n - i - 1);
        cout << i + 1 << "\t";
        if (i > 0)
        {
            printLine(i + 1);
        }

        cout << endl;
    }
}