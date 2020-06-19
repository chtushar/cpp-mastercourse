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

    int c = 0;

    while ((xr & 1) != 1)
    {
        c++;
        xr = xr >> 1;
    }

    int x1 = 0;
    int x2 = 0;

    return 0;
}