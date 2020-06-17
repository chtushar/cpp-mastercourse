#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void decimalToBinary(int n, int length)
{
    string res;

    for (int i = 0; i < length; i++)
    {
        int rem = n % 2;
        res += to_string(rem);
        n /= 2;
    }

    reverse(res.begin(), res.end());

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        int num1 = stoi(str1, nullptr, 2);
        int num2 = stoi(str2, nullptr, 2);
        int res = num1 ^ num2;

        decimalToBinary(res, str1.length());
    }

    return 0;
}