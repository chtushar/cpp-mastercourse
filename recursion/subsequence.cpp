#include <bits/stdc++.h>

using namespace std;

void subsequence(char a[], int i, char output[], int j)
{
    if (a[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;

        return;
    }

    output[j] = a[i];
    subsequence(a, i + 1, output, j + 1);
    subsequence(a, i + 1, output, j);
}

int main()
{

    char a[] = "tush";

    char output[1000];

    subsequence(a, 0, output, 0);

    return 0;
}