#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, ans;
        cin >> n >> k;

        ans = n * k + (~n) * (~k);

        cout << ans << endl;
    }

    return 0;
}