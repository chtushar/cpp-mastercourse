#include <iostream>

using namespace std;

int main()
{
    int N, M, X, Y, count = 0;
    cin >> N >> M >> X >> Y;

    for (int i = 0; i < N; i++)
    {
        if (M >= X)
        {
            count++;
            M -= X;
        }
        else
        {
            M += Y;
        }
    }

    cout << count << endl;

    return 0;
}