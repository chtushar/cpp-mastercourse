#include <iostream>

using namespace std;

void printZeros(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 0;
    }
}

void printOnes(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 1;
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printOnes(1);
            printZeros(i - 2);
            printOnes(1);
        }
        else
        {
            printOnes(i);
        }

        cout << endl;
    }

    return 0;
}