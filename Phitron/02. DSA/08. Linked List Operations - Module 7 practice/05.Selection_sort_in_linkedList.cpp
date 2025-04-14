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

void sortLinkedList(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                int temp = i->val;
                i->val = j->val;
                j->val = temp;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int number;

    while (1)
    {
        cin >> number;

        if (number == -1)
            break;

        createList(head, tail, number);
    }

    cout << "Before sort: " << endl;
    printList(head);

    cout << "After sort: " << endl;
    sortLinkedList(head);
    printList(head);

    return 0;
}