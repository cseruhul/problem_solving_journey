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

void createNode(Node *&head, Node *&tail, int val)
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

void printListReverse(Node *&head)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return;
    }

    printListReverse(temp->next);
    cout << temp->val << " ";
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
            break;

        createNode(head, tail, number);
    }

    printListReverse(head);

    return 0;
}