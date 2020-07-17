#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2, a[20], b[20], c[20], k = 0;

    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n1; i++)
    {
        int j;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }

        if (j == n2)
        {
            c[k] = a[i];
            k++;
        }
    }

    if (k == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    sort(c, c + k);

    cout << c[0] << endl;

    return 0;
}