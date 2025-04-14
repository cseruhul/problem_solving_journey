#include <bits/stdc++.h>
using namespace std;

/*
6 3 5 -1 2 0 -1 1 -1 -1 -1 -1 -1

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

Node *create_tree()
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

void bfs(Node *root)
{
    queue<Node *> que;
    que.push(root);

    while (!que.empty())
    {
        Node *front = que.front();
        que.pop();

        cout << front->val << " ";

        if (front->left)
            que.push(front->left);

        if (front->right)
            que.push(front->right);
    }

    cout << endl;
}

int count_height(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL and root->right == NULL)
        return 0;

    int left_height = count_height(root->left);
    int right_height = count_height(root->right);

    return max(left_height, right_height) + 1;
}

int main()
{
    Node *root;
    root = create_tree();

    bfs(root);
    cout << count_height(root) << endl;
    return 0;
}