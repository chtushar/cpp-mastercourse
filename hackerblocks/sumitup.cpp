#include <bits/stdc++.h>

using namespace std;

void subset(vector<int> a, int n, int key, vector<int> temp)
{
    if (key == 0)
    {
        for (auto x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    if (n == 0)
    {
        return;
    }

    subset(a, n - 1, key, temp);
    temp.push_back(a[n - 1]);
    subset(a, n - 1, key - a[n - 1], temp);
}

bool mycompare(int a, int b)
{

    return a > b;
}

int main()
{

    int n;
    cin >> n;
    vector<int> a, temp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end(), mycompare);
    int key;
    cin >> key;

    subset(a, n, key, temp);
}