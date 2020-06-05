#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

void printLine(int n)
{
    while (n--)
    {
        cout << "*";
    }
    cout << endl;
}

void printLine2(int n, int k)
{
    //spaces
    printSpaces(n - k);
    cout << "*";
    printSpaces(n - 2);
    cout << "*";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cout << " ";
    }

    printLine(n);
    for (int i = 2; i <= n - 1; i++)
    {
        printLine2(n, i);
    }
    printLine(n);
}