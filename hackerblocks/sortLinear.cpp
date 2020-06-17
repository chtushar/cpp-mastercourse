#include <iostream>

using namespace std;

int main()
{

    int n, a[1000000], count[4] = {0}, res[1000000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i] + 1] += 1;
    }

    for (int i = 1; i < 4; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        res[count[a[i]] + 1] = a[i];
        --count[a[i]];
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}