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

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void sort_list(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val <= j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

int main()
{
    int number;

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> number;

        if (number == -1)
        {
            break;
        }

        createList(head, tail, number);
    }

    sort_list(head);
    printList(head);

    return 0;
}