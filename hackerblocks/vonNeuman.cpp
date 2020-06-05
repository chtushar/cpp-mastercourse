#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int convertToDecimal(long long n)
{
    int d = 0, i = 0, r;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        d += r * pow(2, i);
        ++i;
    }

    return d;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        int r = convertToDecimal(x);
        cout << r << endl;
    }
}