#include <bits/stdc++.h>
#include <vector>

using namespace std;

void updateScore(vector<int> &a, int *ptr)
{
    if (max(a.front(), a.back()) == a.front())
    {
        *ptr += a.front();
        a.erase(a.begin());
    }
    else
    {
        *ptr += a.back();
        a.pop_back();
    }
}

int main()
{
    int n, p = 0, ni = 0;

    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            updateScore(a, &p);
        }
        else
        {
            updateScore(a, &ni);
        }
    }

    cout << p << endl;

    return 0;
}