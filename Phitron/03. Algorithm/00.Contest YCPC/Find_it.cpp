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
    Node *root;
    queue<Node *> q;

    cin >> val;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l_val, r_val;
        Node *l_child, *r_child;
        cin >> l_val >> r_val;

        if (l_val == -1)
            l_child = NULL;
        else
            l_child = new Node(l_val);

        if (r_val == -1)
            r_child = NULL;
        else
            r_child = new Node(r_val);

        if (l_child)
            parent->left = l_child;

        if (r_child)
            parent->right = r_child;

        if (parent->left)
            q.push(parent->left);

        if (parent->right)
            q.push(parent->right);
    }

    return root;
}

int count_freq(Node *root)
{
    int val = INT_MIN;
    int ans;
    map<int, int> mp;
    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        mp[parent->val]++;

        if (mp[parent->val] >= val)
        {
            
            ans = parent->val;

        }

        if (parent->left)
            q.push(parent->left);

        if (parent->right)
            q.push(parent->right);
    }

    return ans;
}

int main()
{
    Node *root = create_tree();

    cout << count_freq(root);

    return 0;
}