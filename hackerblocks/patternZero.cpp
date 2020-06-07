#include <iostream>

using namespace std;

void printZeros(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 0 << "\t";
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
        {
            cout << i << "\t";
            printZeros(i - 2);
            cout << i;
        }

        cout << endl;
    }

    return 0;
}