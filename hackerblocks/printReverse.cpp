#include <iostream>

using namespace std;

void printReverse(long long n)
{

    while (n != 0)
    {
        cout << n % 10;
        n = n / 10;
    }
    cout << endl;
}

int main()
{
    long long n;
    cin >> n;

    printReverse(n);
}