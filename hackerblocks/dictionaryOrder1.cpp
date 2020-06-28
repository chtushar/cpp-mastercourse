#include <bits/stdc++.h>

using namespace std;

void permut(char a[], int i, char temp[])
{

    if (a[i] == '\0')
    {
        if (strcmp(temp, a) > 0)
        {
            cout << a << endl;
        }

        return;
    }

    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        permut(a, i + 1, temp);
        swap(a[i], a[j]); //backtracking
    }
}

int main()
{
    char a[10], temp[10];

    cin.getline(a, 10);

    strcpy(temp, a);

    permut(a, 0, temp);

    return 0;
}