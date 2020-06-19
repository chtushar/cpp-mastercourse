#include <iostream>

using namespace std;

int main()
{

    int n, a = 0, b = 1, temp;
    cin >> n;

    cout << a << " ";
    cout << b << " ";
    while (n - 2 != 0)
    {
        temp = a;
        a = b;
        b = temp + a;

        cout << b << " ";
        n--;
    }

    return 0;
}