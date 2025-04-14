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

void create_list(Node *&head, Node *&temp, int val)
{
    Node *newNode = new Node(val);

    if (!head)
    {
        head = newNode;
        temp = newNode;
        return;
    }

    temp->next = newNode;
    temp = newNode;
}

int print_list(Node *temp)
{
    int sz = 0;
    while (temp)
    {
        sz++;
        temp = temp->next;
    }

    return sz;
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

        create_list(head, tail, val);
    }

    cout << print_list(head);

    return 0;
}