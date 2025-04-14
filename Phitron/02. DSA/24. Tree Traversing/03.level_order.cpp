#include <bits/stdc++.h>
using namespace std;

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

Node *input_binary_tree()
{
    int n;
    cin >> n;

    Node *root;
    if (n == -1)
        root = NULL;
    else
        root = new Node(n);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left_node, *right_node;

        if (l == -1)
            left_node = NULL;
        else
            left_node = new Node(l);

        if (r == -1)
            right_node = NULL;
        else
            right_node = new Node(r);

        p->left = left_node;
        p->right = right_node;

        if (left_node)
            q.push(left_node);

        if (right_node)
            q.push(right_node);
    }

    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root;

    root = input_binary_tree();

    level_order(root);

    return 0;
}