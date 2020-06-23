#include <iostream>

using namespace std;

void printInc(int *a, int i, int n)
{

    //base
    if (i == n)
    {
        return;
    }

    //recursive

    cout << a[i] << " ";
    printInc(a, i + 1, n);

    //answer calculation
}

void printDec(int *a, int i, int n)
{

    //base
    if (i == n)
    {
        return;
    }

    //recursive

    printDec(a, i + 1, n);
    cout << a[i] << " ";

    //answer calculation
}

int main()
{
    int n, a[1000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    printInc(a, 0, n);
    cout << endl;
    printDec(a, 0, n);
    cout << endl;

    return 0;
}