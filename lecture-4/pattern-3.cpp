// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int val = 0;
            for (int j = 1; j <= i; j++)
            {
                cout << val << " ";
                val = 1 - val;
            }
            cout << endl;
        }
        else
        {
            int val = 1;
            for (int j = 1; j <= i; j++)
            {
                cout << val << " ";
                val = 1 - val;
            }
            cout << endl;
        }
    }
}