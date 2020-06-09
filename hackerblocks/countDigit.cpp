#include <iostream>

using namespace std;

int main()
{
    long n;
    int d, count = 0;

    cin >> n;
    cin >> d;

    while (n != 0)
    {
        int rem = n % 10;

        if (rem == d)
        {
            count++;
        }

        n /= 10;
    }

    cout << count << endl;
}