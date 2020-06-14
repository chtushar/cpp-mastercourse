#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, xr = 0, setBit;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        xr = xr ^ a[i];
    }

    setBit = xr & ~(xr - 1);

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] & setBit)
        {
            x = x ^ a[i];
        }
        else
        {
            y = y ^ a[i];
        }
    }

    cout << x << " " << y << endl;

    return 0;
}