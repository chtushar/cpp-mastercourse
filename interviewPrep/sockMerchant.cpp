#include <bits/stdc++.h>

using namespace std;

bool my_comp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, a[103] = {0}, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }

    sort(a, a + 103, my_comp);

    int i = 0;
    while (a[i] != 0)
    {
        count += a[i] / 2;
        i++;
    }

    cout << count << endl;

    return 0;
}