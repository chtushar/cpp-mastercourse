#include <bits/stdc++.h>

using namespace std;

bool placeCow(int stalls[], int n, int c, int min_sep)
{
    int last_cow = stalls[0];
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - last_cow >= min_sep)
        {
            last_cow = stalls[i];
            cnt++;
            if (cnt == c)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n, c, ans;
    cin >> n >> c;

    int stalls[n];

    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
    }

    int s = 0;
    int e = stalls[n - 1] - stalls[0];

    while (s <= e)
    {
        int mid = (s + e) / 2;
        bool canPlaceCows = placeCow(stalls, n, c, mid);

        if (canPlaceCows)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans << endl;
}