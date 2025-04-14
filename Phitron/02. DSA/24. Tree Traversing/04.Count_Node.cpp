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

Node *tree_input()
{
    int num;
    cin >> num;

    Node *root;
    if (num == -1)
        root = NULL;
    else
        root = new Node(num);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *leftNode, *rightNode;

        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);

        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);

        parent->left = leftNode;
        parent->right = rightNode;

        if (leftNode)
            q.push(leftNode);

        if (rightNode)
            q.push(rightNode);
    }

    return root;
}

void level_order_traverse(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty";
        return;
    }

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        Node *front = qu.front();
        qu.pop();

        cout << front->val << " ";

        if (front->left)
            qu.push(front->left);
        if (front->right)
            qu.push(front->right);
    }
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int left = count_nodes(root->left);
    int right = count_nodes(root->right);

    return left + 1 + right;
}

int main()
{
    Node *root;
    root = tree_input();

    level_order_traverse(root);
    cout << endl;
    cout << count_nodes(root);

    return 0;
}