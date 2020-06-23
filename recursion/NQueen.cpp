#include <iostream>

using namespace std;

bool is_valid(int n, int row, int col, int board[][100])
{
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == 1)
        {
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    int i = row - 1;
    int j = col - 1;

    while (i >= 0 && col >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    i = row - 1;
    j = col + 1;

    while (i >= 0 && j < n)
    {
        if (board[i][j] == 1)
        {
            return false;
        }

        i--;
        j++;
    }
}

bool nqueens(int n, int row, int board[][100])
{

    if (row == n)
    {
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cout << board[x][y] << " ";
            }

            cout << endl;
        }

        return true;
    }

    int col;

    for (col = 0; col < n; col++)
    {
        if (is_valid(n, row, col, board))
        {
            board[row][col] = 1;

            if (nqueens(n, row + 1, board))
            {
                return true;
            }

            board[row][col] = 0;
        }
    }

    //return false;
}

int main()
{
    int n;
    cin >> n;

    int board[100][100] = {0};

    bool is_answer = nqueens(n, 0, board);

    if (is_answer)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Did not placed";
    }

    return 0;
}