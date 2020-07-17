#include <iostream>

using namespace std;

class Vector
{

public:
    int *a;
    int curr_size;
    int capacity;

    Vector(int x = 5)
    {
        curr_size = 0;
        capacity = x;

        a = new int[capacity];
    }

}

int
main()
{

    return 0;
}