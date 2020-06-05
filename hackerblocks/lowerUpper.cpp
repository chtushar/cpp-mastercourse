#include <iostream>

using namespace std;
//65-90 uppercase
//97-122 lowercase

int main()
{
    char c;

    cin >> c;

    int int_value = c;

    if (int_value >= 'A' && int_value <= 'Z')
    {
        cout << "UPPERCASE" << endl;
    }
    else if (int_value >= 'a' && int_value <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}