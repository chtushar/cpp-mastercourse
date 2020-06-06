#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long n;
    cin >> n;

    for (long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
    }

    cout << "Prime" << endl;

    return 0;
}