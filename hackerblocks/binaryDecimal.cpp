#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long n;
    int i = 0, ans = 0;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        ans = ans + rem * pow(2, i);
        n = n / 10;
        i++;
    }

    cout << ans << endl;

    return 0;
}