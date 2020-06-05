#include <iostream>

using namespace std;

int main()
{
    int init, fin, step;
    cin >> init;
    cin >> fin;
    cin >> step;

    for (int i = init; i <= fin; i += 20)
    {
        int c;
        c = (5.0 / 9) * (i - 32);
        cout << i << " " << c << endl;
    }
}