#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

node *CreateTree()
{
    int data;
    cin >> data;

    if (data = -1)
    {
        return NULL;
    }
    else
    {
        node *root = new node(data);
        root->left = CreateTree();
        root->right = CreateTree();

        return root;
    }
}

int main()
{

    return 0;
}