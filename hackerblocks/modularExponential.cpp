#include <bits/stdc++.h>

using namespace std;

int power()
{
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int res = pow(a, b);

    res = res % c;

    cout << res << endl;
}