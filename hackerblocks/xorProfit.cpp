#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, max = INT_MIN;

    cin >> x;
    cin >> y;

    for (int i = x; i <= y; i++)
    {
        for (int j = x; j <= y; j++)
        {
            int c;
            c = i ^ j;

            if (c > max)
            {
                max = c;
            }
        }
    }

    cout << max << endl;

    return 0;
}