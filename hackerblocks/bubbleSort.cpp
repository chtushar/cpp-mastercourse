#include <iostream>

using namespace std;

int main()
{

    int n, flag = 0;
    long a[100000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag++;
                swap(a[j], a[j + 1]);
            }
        }

        //for optimization
        if (flag == 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}