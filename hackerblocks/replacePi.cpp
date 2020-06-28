#include <bits/stdc++.h>

using namespace std;

void replacePi(char a[], int i)
{

    //base
    if (a[i] == '\0' || a[i + 1] == '\0')
    {
        return;
    }
    //rec case
    if (a[i] == 'p' && a[i + 1] == 'i')
    {
        //shifting
        int j = i + 2;
        //take j to the end

        while (a[j] != '\0')
        {
            j++;
        }
        while (j >= i + 2)
        {
            a[j + 2] = a[j];
            j--;
        }

        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';

        replacePi(a, i + 4);
    }
    else
    {
        //goto to next
        replacePi(a, i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[2000];
        cin >> a;
        replacePi(a, 0);
        cout << a << endl;
    }

    return 0;
}