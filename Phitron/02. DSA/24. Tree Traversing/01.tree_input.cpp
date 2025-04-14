#include <bits/stdc++.h>
using namespace std;

/*
10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
*/

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *a = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        a->left = myLeft;
        a->right = myRight;

        if (myLeft)
            q.push(myLeft);

        if (myRight)
            q.push(myRight);
    }

    return root;
}

void level_order_traverse(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->val << " ";

        if (front->left)
            q.push(front->left);

        if (front->right)
            q.push(front->right);
    }
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    Node *root;
    root = input_tree();

    cout << "BFS: \n";
    level_order_traverse(root);

    cout << endl;
    cout << "DFS: \nIn-order: ";
    inorder(root);

    return 0;
}