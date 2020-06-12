#include <iostream>

using namespace std;

int main()
{

    int n, a[2000], flag = 0, median;
    cin >> n;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag++;
                swap(a[j], a[j + 1]);
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    int x = (a[n] + a[n - 1]) / 2;
    cout << x << endl;

    return 0;
}