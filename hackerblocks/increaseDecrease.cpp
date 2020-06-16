#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, a[1000], flag;
    cin >> n;

    bool dec = false, inc = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //strictly decreasing
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i + 1])
        {
            dec = true;
            flag = i; //setting flag equal to position
            break;
        }
    }

    //strictly increasing
    for (int i = flag; i <= n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            continue;
        }
        else
        {
            inc = false;
            break;
        }
    }

    if (dec && inc)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}