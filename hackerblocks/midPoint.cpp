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

    void deleteAtHead()
    {
        if (HEAD == NULL)
        {
            return;
        }
        node *temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
        return;
    }

    void deleteAtTail()
    {
        node *prev = NULL;
        node *temp = HEAD;

        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = NULL;
        return;
    }

    void deleteBetween(int p)
    {
        int count = 0;
        node *temp = HEAD;
        node *prev;

        while (count != p)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        prev->next = temp->next;
        delete temp;
        return;
    }

    void swapData(node *a, node *b)
    {
        if (a->data == b->data)
        {
            return;
        }

        node *temp;

        temp->data = a->data;
        a->data = b->data;
        b->data = temp->data;

        delete temp;
    }

    void printMidPoint(node *head)
    {
        node *slow = head;
        node *fast = head->next;

        if (head != NULL)
        {
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }

            cout << slow->data << endl;
        }
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

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.pushattail(x);
    }

    l.printMidPoint(l.HEAD);

    return 0;
}