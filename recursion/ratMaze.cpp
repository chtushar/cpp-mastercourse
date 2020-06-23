#include <iostream>

using namespace std;

bool ratMaze(char maze[][4], int i, int j, int n, int m, int path[][4])
{

    if (i == n - 1 && j == m - 1)
    {
        path[i][j] = 1;

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < m; y++)
            {
                //cout << path[x][y] << " ";
            }
        }
        return true;
    }

    path[i][j] = 1;

    //right move
    if (j + 1 < m && maze[i][j + 1] != 'x')
    {
        path[i][j + 1] = 1;

        if (ratMaze(maze, i, j + 1, n, m, path))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //down
    if (i + 1 < n && j < m && maze[i + 1][j] != 'x')
    {
        path[i + 1][j] = 1;

        if (ratMaze(maze, i + 1, j, n, m, path))
        {
            return true;
        }
    }

    path[i][j] = 0;

    return false;
}

int main()
{

    char maze[4][4] = {
        {'o', 'o', 'x', 'o'},
        {'o', 'o', 'o', 'o'},
        {'x', 'x', 'o', 'o'},
        {'x', 'o', 'x', 'o'},
    };
    int output[4][4] = {0};

    bool is_path = ratMaze(maze, 0, 0, 4, 4, output);

    if (is_path)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << output[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Path doesn't exist" << endl;
    }

    return 0;
}