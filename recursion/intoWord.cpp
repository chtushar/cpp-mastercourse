#include <iostream>

using namespace std;

string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void intoWord(int x)
{

    if (x == 0)
    {
        return;
    }

    intoWord(x / 10);

    cout << s[x % 10] << " ";
}

int main()
{
    int n;
    cin >> n;

    intoWord(n);
    cout << endl;
    return 0;
}