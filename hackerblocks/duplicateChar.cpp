#include <bits/stdc++.h>
using namespace std;

void duplicateChar(char *a, int t)
{
    if (t >= strlen(a))
        return;

    if (a[t] == a[t + 1])
    {
        for (int i = strlen(a); i > t; i--)
        {
            a[i] = a[i - 1];
        }

        a[t + 1] = '*';
        duplicateChar(a, t + 2);
    }
    else
    {
        duplicateChar(a, t + 1);
    }

    return;
}

int main()
{
    char a[2000];
    cin >> a;
    duplicateChar(a, 0);
    cout << a;
    cout << endl;
    return 0;
}
