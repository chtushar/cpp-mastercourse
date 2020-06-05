#include <iostream>

using namespace std;
//65-90 uppercase
//97-122 lowercase

int main()
{
    char c;

    cin >> c;

    int int_value = c;

    if (int_value >= 65 && int_value <= 90)
    {
        cout << "UpperCase" << endl;
    }
    else
    {
        cout << "LowerCase" << endl;
    }

    return 0;
}