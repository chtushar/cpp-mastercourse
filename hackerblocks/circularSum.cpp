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

        
        cout << max << endl;
    }

    return 0;
}