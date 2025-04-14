#include <bits/stdc++.h>
using namespace std;

/*
01. 3 9 20 -1 -1 15 7 -1 -1 -1 -1
02. 1 -1 2 -1 3 -1 -1
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

void traverse(Node *root)
{
    queue<Node *> q;

    if (root)
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

    cout << endl;
}

class Solution
{
public:
    int calculate_height(Node *root)
    {
        if (root == NULL)
            return 0;

        // if (root->left == NULL and root->right == NULL)
        //     return 0;

        int l = calculate_height(root->left);
        int r = calculate_height(root->right);

        return max(l, r) + 1;
    }

    bool isBalanced(Node *root)
    {
        if (root == NULL)
            return true;

        int l_sub_tree = calculate_height(root->left);
        int r_sub_tree = calculate_height(root->right);

        if (abs(l_sub_tree - r_sub_tree) > 1)
            return false;

        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);

        return l and r;
    }
};

int main()
{
    Node *root;
    root = create_tree();

    traverse(root);

    Solution obj;

    bool ans = obj.isBalanced(root);

    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}