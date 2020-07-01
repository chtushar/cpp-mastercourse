#include <bits/stdc++.h>

using namespace std;
string searchIn[] = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "WXYZ"};

void generate_names(char *s, char *out, int i, int j)
{

    //base case
    if (s[i] == '\0')
    {
        out[j] = '\0';

        for (int i = 0; i < 11; i++)
        {
            if (searchIn[i].find(out) == -1)
            {
                continue;
            }
            else
            {
                cout << searchIn[i] << endl;
            }
        }

        return;
    }

    //rec

    int digit = s[i] - '0';

    for (int k = 0; keypad[digit][k] != '\0'; k++)
    {
        out[j] = keypad[digit][k];

        generate_names(s, out, i + 1, j + 1);
    }
}

int main()
{
    char s[100], out[100];
    cin >> s;

    generate_names(s, out, 0, 0);

    return 0;
}