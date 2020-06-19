#include <iostream>

using namespace std;

int main()
{

    int x = 5;
    int *px = &x;
    int y = *px;

    cout << x << " " << y << endl;

    
    return 0;
}