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

Node *create_tree()
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
        Node *parent = q.front();
        q.pop();

        int l_val, r_val;
        Node *left_node, *right_node;

        cin >> l_val >> r_val;

        if (l_val == -1)
            left_node = NULL;
        else
            left_node = new Node(l_val);

        if (r_val == -1)
            right_node = NULL;
        else
            right_node = new Node(r_val);

        parent->left = left_node;
        parent->right = right_node;

        if (left_node)
            q.push(left_node);

        if (right_node)
            q.push(right_node);
    }

    return root;
}

void level_order_traverse(Node *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *frnt = q.front();
        q.pop();

        cout << frnt->val << " ";

        if (frnt->left)
            q.push(frnt->left);

        if (frnt->right)
            q.push(frnt->right);
    }
}

int count_leaf_node(Node *root)
{
    if (root == NULL)
        return 0;

    if ((root->left == NULL) and (root->right == NULL))
        return 1;

    int left_node = count_leaf_node(root->left);
    int right_node = count_leaf_node(root->right);

    return left_node + right_node;
}

int main()
{
    Node *root;

    root = create_tree();

    level_order_traverse(root);

    cout << endl;
    cout << count_leaf_node(root) << endl;

    return 0;
}