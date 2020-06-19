#include <iostream>

using namespace std;

int fibonacci(int n)
{
    //base case

    if (n == 0 || n == 1)
    {
        return n;
    }

    //recursive case
    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);

    //answer

    return (a + b);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}