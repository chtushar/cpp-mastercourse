#include <bits/stdc++.h>

using namespace std;

int pos = 0;
void permut(char a[], int i, char temp[], string out[])
{

    if (a[i] == '\0')
    {
        if (strcmp(temp, a) < 0)
        {
            out[pos] = a;
            pos++;
        }

        return;
    }

    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        permut(a, i + 1, temp, out);
        swap(a[i], a[j]); //backtracking
    }
}

int main()
{
    char a[10], temp[10];
    string out[10000];
    cin.getline(a, 10);

    strcpy(temp, a);

    permut(a, 0, temp, out);
    sort(out, out + pos);

    for (int i = 0; i <= pos; i++)
    {
        cout << out[i] << endl;
    }

    return 0;
}