#include <iostream>

using namespace std;

void printStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*\t";
    }
}

void printSpaces(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " \t";
    }
}

int main()
{
    int n;
    cin >> n;

    //upper
    for (int i = 0; i < n / 2 + 1; i++)
    {
        if (i == 0)
        {
            printStars(n);
        }
        else
        {
            printStars(n / 2 - i + 1);
            printSpaces(i);
            printSpaces(i - 1);
            printStars(n / 2 - i + 1);
        }
        cout << endl;
    }

    //lower
    for (int i = 0; i < n / 2; i++)
    {
        if (i == n / 2 - 1)
        {
            printStars(n);
        }
        else
        {
            printStars(i + 2);
            printSpaces(n / 2 - i - 1);
            printSpaces(n / 2 - i - 2);
            printStars(i + 2);
        }
        cout << endl;
    }

    return 0;
}