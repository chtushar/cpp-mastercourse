#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, xr = 0;
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

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i += 2)
    {
        xr = xr ^ a[i];
    }

    cout << xr << endl;

    return 0;
}