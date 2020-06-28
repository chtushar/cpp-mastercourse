#include <bits/stdc++.h>

using namespace std;

string solve(string str, int i, int firstx)
{
    if (i >= str.size())
        return str;
    if (str[i] != 'x' && i > firstx)
    {
        swap(str[i], str[firstx]);
        firstx++;
    }
    return solve(str, i + 1, firstx);
}

int main()
{
    string str;
    cin >> str;
    //string strx(str.size(), 'x');
    //cout << find(begin(str), end(str), 'x') - begin(str) << endl;
    cout << solve(str, 0, find(begin(str), end(str), 'x') - begin(str)) << endl;
    return 0;
}