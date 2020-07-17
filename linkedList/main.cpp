#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class LinkedList
{
public:
    node *HEAD;
    node *TAIL;

    LinkedList()
    {
        HEAD = NULL;
        TAIL = NULL;
    }

    void pushathead(int x)
    {
        node *n = new node(x);

        if (HEAD == NULL)
        {
            HEAD = n;
            TAIL = n;
        }
        else
        {
            n->next = HEAD;
            HEAD = n;
        }
    }

    void pushattail(int x)
    {
        node *n = new node(x);

        if (HEAD == NULL)
        {
            HEAD = n;
            TAIL = n;
        }
        else
        {
            TAIL->next = n;
            TAIL = n;
        }
    }

    void insertBetween(int d, int pos)
    {
        if (HEAD == NULL || pos == 0)
        {
            pushathead(d);
        }
        else if (pos > length())
        {
            pushattail(d);
        }
        else
        {
            int jump = 1;
            node *temp = HEAD;
            while (jump <= pos - 1)
            {
                temp = temp->next;
                jump += 1;
            }

            node *n = new node(d);
            n->next = temp->next;
            temp->next = n;
        }
    }

    void print()
    {
        node *temp = HEAD;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }

    int length()
    {
        node *temp = HEAD;
        int l = 0;

        while (temp != NULL)
        {
            l++;
            temp = temp->next;
        }

        return l;
    }
};

int main()
{
    LinkedList l;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.pushattail(x);
    }

    int pos, data;

    cin >> pos >> data;

    l.insertBetween(data, pos);

    l.print();

    return 0;
}