#include <iostream>

using namespace std;

void printZeros(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 0;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << 1 << endl;

    for (int i = 1; i <= n - 1; i++)
    {
        cout << i;
        printZeros(i - 1);
        cout << i << endl;
    }

    return 0;
}