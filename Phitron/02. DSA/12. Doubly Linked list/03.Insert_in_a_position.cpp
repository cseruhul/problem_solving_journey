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

void print_backword(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->previous;
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

void insert_in_a_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->previous = newNode;

    temp->next = newNode;
    newNode->previous = temp;
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
    insert_in_a_position(head, 2, 5);
    print_forward(head);
    insert_in_a_position(head, 3, 50);
    print_forward(head);

    return 0;
}