#include <iostream>

using namespace std;

int main()
{

    int a[5] = {5, 3, 1, 2, 4};
    int s = sizeof(a) / sizeof(int);

    for (int i = 0; i < s - 1; i++)
    {
        int assumption = i;
        int min_index = i;

        for (int j = i + 1; i < s; i++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }

        swap(a[min_index], a[assumption]);
    }

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}