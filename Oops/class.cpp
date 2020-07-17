#include <bits/stdc++.h>

using namespace std;

class Car
{

public:
    char *name;
    int price;
    int seater;
    char model_no[50];
    string color;

    Car()
    {
        char a[100];
        cin >> a;

        name = new char[strlen(a)];
        cin >> price;
        cin >> seater;
        cin >> model_no;
        cin >> color;
    }

    void print()
    {
        cout << endl;
        cout << name << endl;
        cout << price << endl;
        cout << seater << endl;
        cout << model_no << endl;
        cout << color << endl;
    }
};

int main()
{
    Car A;

    A.print();

    return 0;
}