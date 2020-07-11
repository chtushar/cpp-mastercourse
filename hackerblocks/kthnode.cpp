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

    void kthnode(int k)
    {
        node *temp = HEAD;
        for (int i = 0; i < length() - k; i++)
        {
            temp = temp->next;
        }

        cout << temp->data << endl;
    }

    void print()
    {
        node *temp = HEAD;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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

    int temp = 0;

    while (1)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }
        else
        {
            l.pushattail(x);
        }

        temp = x;
    }

    int k;
    cin >> k;

    l.kthnode(k);

    return 0;
}