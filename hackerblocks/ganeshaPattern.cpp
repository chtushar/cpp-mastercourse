#include <iostream>

using namespace std;

void printSpaces(int n)
{
    while (n--)
    {
        cout << " ";
    }
}
void printStars(int n)
{
    while (n--)
    {
        cout << "*";
    }
}
int main()
{
    int n;
    cin >> n;

    printStars(1);
    printSpaces(n / 2 - 1);
    printStars(n / 2 + 1);
    cout << endl;
    for (int i = 0; i < n / 2 - 1; i++)
    {
        printStars(1);
        printSpaces(n / 2 - 1);
        printStars(1);
        cout << endl;
    }
    printStars(n);
    cout << endl;
    for (int i = 0; i < n / 2 - 1; i++)
    {
        printSpaces(n / 2);
        printStars(1);
        printSpaces(n / 2 - 1);
        printStars(1);
        cout << endl;
    }
    printStars(n / 2 + 1);
    printSpaces(n / 2 - 1);
    printStars(1);
}