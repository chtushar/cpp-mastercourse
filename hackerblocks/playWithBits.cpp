#include <iostream>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;

        for (int i = a; i <= b; i++)
        {
            ans += countSetBits(i);
        }

        cout << ans << endl;
    }

    return 0;
}