#include <bits/stdc++.h>

using namespace std;

int counts(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else if (n == 2)
    {
        return 3;
    }

    return counts(n - 1) + counts(n - 2);
}

int main()
{
    int t, i = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << "#" << i << " : " << counts(n) << endl;
        i++;
    }

    return 0;
}