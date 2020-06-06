#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, temp;
    cin >> n;

    cout << a << endl;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << b << "\t";

            temp = a;
            a = b;
            b = temp + a;
        }
        cout << endl;
    }

    return 0;
}