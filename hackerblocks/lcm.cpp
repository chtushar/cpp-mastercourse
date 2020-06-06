#include <iostream>

using namespace std;

void printLCM(long n1, long n2)
{
    long max;
    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << max << endl;
            break;
        }
        else
        {
            ++max;
        }
    }
}

int main()
{
    long n1, n2;
    cin >> n1 >> n2;

    printLCM(n1, n2);
    return 0;
}