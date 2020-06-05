#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int counter = 3, max = INT_MIN;

    while (counter--)
    {
        int x;
        cin >> x;

        if (x > max)
        {
            max = x;
        }
    }

    cout << "Largest of three is " << max << endl;

    return 0;
}