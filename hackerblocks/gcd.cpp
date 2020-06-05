#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;

    if (n1 % n2 == 0)
    {
        cout << n2 << endl;
    }
    else if (n2 % n1 == 0)
    {
        cout << n1 << endl;
    }
    else
    {

        while (n1 != n2)
        {
            if (n1 > n2)
            {
                n1 = n1 - n2;
            }
            else
            {
                n2 = n2 - n1;
            }
        }
        cout << n1 << endl;
    }

    return 0;
}