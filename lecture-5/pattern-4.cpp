#include <iostream>

using namespace std;

void printStars(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        printStars(i);
        cout << " ";
        printStars(n - i + 1);
        cout << " ";
        printStars(n - i + 1);
        cout << " ";
        printStars(i);
        cout << endl;
    }

    return 0;
}