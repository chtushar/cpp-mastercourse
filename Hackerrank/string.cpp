#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[500];
    int count = 0, i;
    cin.getline(str, 500);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    cout << count + 1 << endl;

    return 0;
}