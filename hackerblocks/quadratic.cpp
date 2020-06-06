#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    float factor = pow(b, 2) - 4 * a * c;

    if (factor < 0)
    {
        cout << "Imaginary" << endl;
    }
    else if (factor > 0)
    {
        cout << "Real and Distinct" << endl;

        float root1 = (-b - sqrt(factor)) / 2 * a;
        float root2 = (-b + sqrt(factor)) / 2 * a;

        if (root1 < root2)
        {
            cout << root1 << " " << root2 << endl;
        }
        else
        {
            cout << root2 << " " << root1 << endl;
        }
    }
    else
    {
        cout << "Real and Equal" << endl;
        float root = (-b - sqrt(factor)) / 2 * a;
        cout << root << " " << root << endl;
    }
}