#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int list_size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void insert_at_a_position(Node *&head, Node *&tail, int idx, int val)
{
    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    if (idx == list_size(head))
    {
        insert_at_tail(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

void print_forward(Node *head)
{
    Node *temp = head;
    cout << "L ->";

    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    cout << "R ->";

    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X > list_size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_a_position(head, tail, X, V);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}