#include <iostream>

using namespace std;

int main()
{

    int n, count[3] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            cout << i << endl;
        }
    }

    return 0;
}