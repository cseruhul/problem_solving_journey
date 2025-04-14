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

void reverseList(Node *&head, Node *&tail, Node *temp)
{

    if (temp->next == NULL)
    {
        head = temp;
        return;
    }

    reverseList(head, tail, temp->next);

    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
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

        createList(head, tail, number);
    }

    printList(head);

    reverseList(head, tail, head);

    printList(head);

    return 0;
}