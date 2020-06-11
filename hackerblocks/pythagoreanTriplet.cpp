#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long n;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
    }
    else if (n % 2 == 0)
    {
        long num1 = pow(n / 2, 2) - 1;
        long num2 = pow(n / 2, 2) + 1;

        cout << num1 << " " << num2 << endl;
    }
    else
    {
        long num1 = 2 * ((n + 1) / 2) * ((n - 1) / 2);
        long num2 = pow((n + 1) / 2, 2) + pow((n - 1) / 2, 2);

        cout << num1 << " " << num2 << endl;
    }

    return 0;
}