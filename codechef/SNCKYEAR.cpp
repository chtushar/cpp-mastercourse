#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;

        if (y == 2010 || y == 2015 || y == 2016 || y == 2017 || y == 2019)
        {
            cout << "HOSTED" << endl;
        }
        else
        {
            cout << "NOT HOSTED" << endl;
        }
    }
    return 0;
}