#include <bits/stdc++.h>

using namespace std;

//int count = 0;

bool isSafe(int board[][100], int i, int j, int n)
{
    //horizontally
    for (int x = 0; x < n; x++)
    {
        if (board[i][x] == 1)
        {
            return false;
        }
    }

    //vertically
    for (int y = 0; y < n; y++)
    {
        if (board[y][j] == 1)
        {
            return false;
        }
    }

    int row = i - 1;
    int col = j - 1;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }

        row--;
        col--;
    }

    row = i - 1;
    col = j + 1;

    while (row >= 0 && col < n)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool solveNQueen(int board[][100], int i, int n, int *c)
{
    if (i == n)
    {
        *c += 1;
        return false;
    }

    int col;

    for (col = 0; col < n; col++)
    {
        if (isSafe(board, i, col, n))
        {
            board[i][col] = 1;
            bool down = solveNQueen(board, i + 1, n, c);

            if (down)
            {
                return true;
            }

            board[i][col] = 0;
        }
    }

    return false;
}

int main()
{
    int n, board[100][100] = {0}, count = 0;
    cin >> n;

    solveNQueen(board, 0, n, &count);

    cout << count << endl;

    return 0;
}