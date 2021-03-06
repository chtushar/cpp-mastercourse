#include <bits/stdc++.h>

using namespace std;

bool is_valid(int mat[0][9], int i, int j, int num, int n)
{
    for (int k = 0; k < n; k++)
    {
        if (mat[i][k] == num)
        {
            return false;
        }
    }

    for (int k = 0; k < n; k++)
    {
        if (mat[k][j] == num)
        {
            return false;
        }
    }

    n = sqrt(n);
    int src = (i / n) * n;
    int scc = (j / n) * n;

    for (int p = src; p < src + n; p++)
    {
        for (int q = scc; q < scc + n; q++)
        {
            if (mat[p][q] == num)
            {
                return false;
            }
        }
    }
}

bool solveSudoku(int mat[][9], int i, int j, int n)
{

    //base case
    if (i == n)
    {
        for (int k = 0; k < n; k++)
        {
            for (int m = 0; m < n; m++)
            {
                cout << mat[k][m] << " ";
            }
            cout << endl;
        }

        return false;
    }

    if (j == n)
    {
        return solveSudoku(mat, i + 1, 0, n);
    }

    if (mat[i][j] != 0)
    {
        return solveSudoku(mat, i, j + 1, n);
    }

    //recursion case
    for (int num = 1; num <= 9; num++)
    {
        if (is_valid(mat, i, j, num, n))
        {
            mat[i][j] = num;
            bool validation = solveSudoku(mat, i, j + 1, n);

            if (validation)
            {
                return true;
            }

            mat[i][j] = 0;
        }
    }

    return false;
}

int main()
{

    int mat[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    solveSudoku(mat, 0, 0, 9);

    return 0;
}