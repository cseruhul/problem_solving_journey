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

void reverse_list(Node *&head, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }

    reverse_list(head, temp->next);

    temp->next->next = temp;
    temp->next = NULL;
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

    reverse_list(head, head);
    print_list(head);

    return 0;
}