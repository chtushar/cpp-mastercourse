#include <bits/stdc++.h>

using namespace std;

int counts(int n)
{
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << "#" << n << " : " << counts(n) << endl;
    }

    return 0;
}