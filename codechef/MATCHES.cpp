#include <bits/stdc++.h>

using namespace std;

int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, ans, m = 0;
        cin >> a >> b;
        ans = a + b;

        while (ans != 0)
        {
            int rem = ans % 10;
            m += arr[rem];
            ans /= 10;
        }

        cout << m << endl;
    }

    return 0;
}