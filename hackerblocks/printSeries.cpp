#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;

    for (int i = 1; i <= n1; i++)
    {
        int x = 3 * i + 2;
        if (x % n2 != 0)
        {
            cout << x << endl;
        }
        else
        {
            n1 = n1 + 1;
        }
    }
}