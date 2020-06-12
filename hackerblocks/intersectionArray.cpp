#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> a, b, ans;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    while (i < n && j < n)
    {

        if (a[i] > b[j])
        {
            j++;
        }
        else if (b[j] > a[i])
        {
            i++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];

        if (i != ans.size() - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "]";
        }
    }

    return 0;
}