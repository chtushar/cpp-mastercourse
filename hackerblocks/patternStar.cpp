#include <iostream>

using namespace std;

void printStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
}

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << x;
            x++;
        }
        printStars(n - i);
        cout << endl;
    }

    return 0;
}