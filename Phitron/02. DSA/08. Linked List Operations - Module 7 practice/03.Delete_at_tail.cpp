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

void delete_node_at_tail(Node *&head, Node *&tail)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    tail = temp;

    delete deleteNode;
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

        createNode(head, tail, number);

        printList(head);
    }

    delete_node_at_tail(head, tail);
    printList(head);

    delete_node_at_tail(head, tail);
    printList(head);

    return 0;
}