#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2;

    cin >> n1;
    cin >> n2;

    int out = n1 > n2 ? n1 - n2 : n2 + n1;

    cout << out << endl;

    return 0;
}