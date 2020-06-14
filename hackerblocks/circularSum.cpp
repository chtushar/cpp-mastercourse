#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;

    cin >> t;
    while (t--)
    {
        int n;
        vector<int> a;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int tempMax = 0, max = 0;

        for (int i = 0; i < n; i++)
        {
            tempMax = tempMax + a[i];

            if (tempMax < 0)
            {
                tempMax = 0;
            }
            if (max < tempMax)
            {
                max = tempMax;
            }
        }

        cout << max << endl;
    }

    return 0;
}