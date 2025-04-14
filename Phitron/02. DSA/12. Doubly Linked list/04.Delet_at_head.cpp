#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *previous;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};

void print_forward(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
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
    newNode->previous = tail;

    tail = newNode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = deleteNode->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    head->previous = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int number;

    while (true)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }

        insert_at_tail(head, tail, number);
    }
    print_forward(head);
    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}