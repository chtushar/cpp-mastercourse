#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, ans = 0, i = 0;
    cin >> n;

    while (n != 0)
    {
        int rem = n % 8;
        ans = ans + rem * pow(10, i);
        n = n / 8;
        i++;
    }

    cout << ans << endl;

    return 0;
}