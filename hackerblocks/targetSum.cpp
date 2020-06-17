#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
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

    sort(a.begin(), a.end());

    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == key)
            {
                cout << a[i] << " and " << a[j] << endl;
            }
        }
    }

    return 0;
}