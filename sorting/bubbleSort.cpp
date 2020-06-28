#include <iostream>

using namespace std;

int main()
{
    int a[5] = {5, 3, 1, 2, 4}, flag = 0;
    int s = sizeof(a) / sizeof(int);

    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < s - 1; j++)
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

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}