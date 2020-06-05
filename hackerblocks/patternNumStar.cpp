#include <iostream>

using namespace std;

void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

void printStars(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "*"
             << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        printNumbers(n - i);
        printStars(i);
        printStars(i - 1);
        cout << endl;
    }

    return 0;
}