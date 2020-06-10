#include <iostream>

using namespace std;

int numOfDigit(long num)
{

    int count = 0;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long num, temp;
        cin >> num;
        temp = num;

        int oddSum = 0, evenSum = 0;
        for (int i = numOfDigit(temp); i >= 1; i--)
        {
            int rem = num % 10;

            if (i % 2 == 0)
            {
                evenSum = evenSum + rem;
            }
            else
            {
                oddSum = oddSum + rem;
            }

            num /= 10;
        }

        if (evenSum % 4 == 0 || oddSum % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}