#include <iostream>

using namespace std;

int main()
{
    int r, c, a[100000][100000];

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    
    return 0;
}