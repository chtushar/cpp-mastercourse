#include <iostream>

using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    int c = 1;

    for (int i = 0; i < n; i++)
    {
        printSpaces(n - i);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }

            cout << c;
            printSpaces(1);
        }
        cout << endl;
    }

    return 0;
}