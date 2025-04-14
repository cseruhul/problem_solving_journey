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

void insert_last(Node *&head, Node *&tail, int val)
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

void insert_first(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_anywhere(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < (index - 1); i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int countList(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
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

int main()
{
    int number, idx, no_of_elements;

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        cin >> number;

        if (number == -1)
        {
            break;
        }

        insert_last(head, tail, number);
    }

    printList(head);

    while (cin >> idx >> number)
    {
        no_of_elements = countList(head);

        if (idx > no_of_elements)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_first(head, number);
            printList(head);
        }
        else if (idx == no_of_elements)
        {
            insert_last(head, tail, number);
            printList(head);
        }
        else
        {
            insert_anywhere(head, idx, number);
            printList(head);
        }
    }

    return 0;
}