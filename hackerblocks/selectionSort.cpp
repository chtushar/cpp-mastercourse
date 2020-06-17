#include <iostream>

using namespace std;

int main()
{

    int n, a[100000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int assume = i;
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        swap(a[min], a[assume]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}