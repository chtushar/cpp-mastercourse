#include <iostream>

using namespace std;

int main()
{

    do
    {
        char ch;
        cin >> ch;

        if ((ch != 'x') && (ch != 'X') && (ch != 42) && (ch != 47) && (ch != 43) && (ch != 45) && (ch != 37))
        {
            cout << "Invalid operation. Try again." << endl;
        }
        else if (ch == 'X' || ch == 'x')
        {
            break;
        }
        else
        {
            int n1, n2;

            cin >> n1;
            cin >> n2;

            if (ch == 42)
            {
                cout << n1 * n2 << endl;
            }
            else if (ch == 47)
            {
                cout << n1 / n2 << endl;
            }
            else if (ch == 43)
            {
                cout << n1 + n2 << endl;
            }
            else if (ch == 45)
            {
                cout << n1 - n2 << endl;
            }
            else if (ch == 37)
            {
                cout << n1 % n2 << endl;
            }
        }

    } while (1);

    return 0;
}