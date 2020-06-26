#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 1000005

void SieveOfEratosthenes(vector<int> &primes)
{

    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));

    for (int p = 2; p * p < MAX_SIZE; p++)
    {
        if (IsPrime[p] == true)
        {
            for (int i = p * p; i < MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }

    // Store all prime numbers
    for (int p = 2; p < MAX_SIZE; p++)
        if (IsPrime[p])
            primes.push_back(p);
}

int main()
{
    vector<int> primes;
    SieveOfEratosthenes(primes);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        cout << primes[x - 1] << endl;
    }

    return 0;
}