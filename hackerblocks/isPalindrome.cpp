#include <iostream>

using namespace std;

bool isPalindrome(int *a, int n)
{

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }

    cout << boolalpha << isPalindrome(a, n) << endl;

    return 0;
}