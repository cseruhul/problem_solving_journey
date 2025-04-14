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

void create_list(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);

    if (!head)
    {
        head = newNode;
        tail = newNode;
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

void sort_list(Node *&head)
{
    for (Node *i = head; i; i = i->next)
    {
        for (Node *j = i->next; j; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int n;
        cin >> n;

        if (n == -1)
            break;

        create_list(head, tail, n);
    }

    print_list(head);
    sort_list(head);
    print_list(head);

    return 0;
}