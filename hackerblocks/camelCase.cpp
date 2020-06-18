#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int i = 0, l = s.length();

    while (i < l)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (i != 0)
            {
                cout << endl;
            }

            cout << s[i];
        }
        else
        {
            cout << s[i];
        }

        i++;
    }

    return 0;
}