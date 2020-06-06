#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, temp, sum = 0;
    int numD = 0;
    cin >> n;
    temp = n;

    while (temp != 0)
    {
        numD++;
        temp /= 10;
    }
    temp = n;

    for (int i = 0; i < numD; i++)
    {
        int r = temp % 10;
        sum = sum + pow(r, numD);

        temp /= 10;
    }

    if (sum == n)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}