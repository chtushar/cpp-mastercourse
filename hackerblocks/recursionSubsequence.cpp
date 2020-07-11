#include <bits/stdc++.h>

using namespace std;

vector<string> a;

void generateSubsequence(char *in, char *out, int i, int j)
{
    //base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        a.push_back(out); //cout << out << " ";
        return;
    }

    //include
    out[j] = in[i];
    generateSubsequence(in, out, i + 1, j + 1);
    //exclude
    generateSubsequence(in, out, i + 1, j);
}

int main()
{

    char in[1000];
    char out[1000];

    cin >> in;
    generateSubsequence(in, out, 0, 0);

    for (int i = a.size() - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a.size() << endl;

    return 0;
}