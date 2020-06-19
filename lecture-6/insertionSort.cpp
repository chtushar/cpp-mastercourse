#include <iostream>

using namespace std;

int main()
{
    int a[5] = {5, 3, 1, 2, 4};
    int s = sizeof(a) / sizeof(int);

    for (int i = 1; i < s; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}