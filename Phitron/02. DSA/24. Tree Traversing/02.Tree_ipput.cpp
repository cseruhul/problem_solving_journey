#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char val;
    Node *left;
    Node *right;

    Node(char val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *tree_input()
{
    char ch;
    cin >> ch;

    Node *root = new Node(ch);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        char l, r;
        cin >> l >> r;

        Node *leftNode, *rightNode;
        if (l == 'a')
            leftNode = NULL;
        else
            leftNode = new Node(l);

        if (r == 'a')
            rightNode = NULL;
        else
            rightNode = new Node(r);

        f->left = leftNode;
        f->right = rightNode;

        if (leftNode)
            q.push(leftNode);

        if (rightNode)
            q.push(rightNode);
    }

    return root;
}

void levelOrder(Node *root)
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

    root = tree_input();

    cout << "BFS: ";
    levelOrder(root);

    cout << "inorder: ";
    inorder(root);

    return 0;
}