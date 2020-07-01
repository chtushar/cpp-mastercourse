#include <bits/stdc++.h>

using namespace std;

bool ratimaze(char maze[][1000], int i, int j, int n, int m, int solution[][1000])
{
    //base
    if (i == n - 1 && j == m - 1)
    {
        solution[i][j] = 1;
        return true;
    }

    //recursive

    solution[i][j] = 1;

    //right
    if (j + 1 < m && maze[i][j + 1] != 'X')
    {
        solution[i][j + 1] = 1;

        bool right = ratimaze(maze, i, j + 1, n, m, solution);

        if (right == true)
        {
            return true;
        }
    }

    //down
    if (i + 1 < n && maze[i + 1][j] != 'X')
    {
        solution[i + 1][j] = 1;

        bool down = ratimaze(maze, i + 1, j, n, m, solution);

        if (down == true)
        {
            return true;
        }
    }

    solution[i][j] = 0;

    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    char maze[1000][1000];
    int solution[1000][1000] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            solution[i][j] = 0;
        }
    }

    if (ratimaze(maze, 0, 0, n, m, solution))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << solution[i][j] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}