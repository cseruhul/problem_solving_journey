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
        next = NULL;
    }
};

void create_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int list_size(Node *head)
{
    Node *temp = head;

    int sz = 0;
    while (temp)
    {
        temp = temp->next;
        sz++;
    }

    return sz;
}

bool same_or_not(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}

void print_list(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int num;

    while (true)
    {
        cin >> num;
        if (num == -1)
            break;

        create_list(head1, tail1, num);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cin >> num;
        if (num == -1)
            break;

        create_list(head2, tail2, num);
    }

    int sz1 = list_size(head1);
    int sz2 = list_size(head2);

    if (sz1 != sz2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}