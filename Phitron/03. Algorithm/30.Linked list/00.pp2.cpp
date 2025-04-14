#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void createList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

bool check_dup(Node *head)
{
    bool dup = false;
    unordered_map<int, int> mp;

    while (head)
    {
        if (mp[head->val])
        {
            dup = true;
            return dup;
        }
        mp[head->val] = 1;
        head = head->next;
    }

    return dup;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        createList(head, tail, val);
        print_list(head);
    }

    cout << check_dup(head);

    return 0;
}