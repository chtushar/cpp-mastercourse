#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[100000];
    int hash[100000];
    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}