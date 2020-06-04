#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime" << endl;
            return 0;
        }
    }

    cout << n << " is a prime" << endl;

    return 0;
}