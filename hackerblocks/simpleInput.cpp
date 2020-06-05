#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    while (sum >= 0)
    {
        int x;
        cin >> x;
        sum += x;

        if (sum >= 0)
        {
            cout << x << endl;
        }
    }
    return 0;
}