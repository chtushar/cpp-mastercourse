#include <iostream>

using namespace std;

void generateBrackets(char *out, int n, int idx, int open, int close)
{

    //base case
    if (idx == 2 * n)
    {
        out[idx] = '\0';
        cout << out << endl;
        return;
    }

    //recursive case

    if (close < open)
    {
        out[idx] = ')';
        generateBrackets(out, n, idx + 1, open, close + 1);
    }

    if (open < n)
    {
        out[idx] = '(';
        generateBrackets(out, n, idx + 1, open + 1, close);
    }

    return;
}

int main()
{
    int n;
    cin >> n;

    char output[1000];
    int idx = 0;

    generateBrackets(output, n, idx, 0, 0);

    return 0;
}