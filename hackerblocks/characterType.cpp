#include <iostream>

using namespace std;

int main()
{

    char ch;

    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "U" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "L" << endl;
    }
    else
    {
        cout << "I" << endl;
    }

    return 0;
}