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

void createList(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void insertAtAnyWhere(Node *&head, int indx, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printLinkedList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void countListSize(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    cout << "Size of the linked List is: " << count << endl;
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
        {
            break;
        }
        else
        {
            createList(head, tail, number);
        }
    }

    countListSize(head);
    printLinkedList(head);

    cin >> number;

    insertAtHead(head, number);
    printLinkedList(head);
    countListSize(head);

    cin >> number;
    createList(head, tail, number);
    printLinkedList(head);
    countListSize(head);

    int index;
    cin >> number >> index;
    insertAtAnyWhere(head, index, number);
    printLinkedList(head);
    countListSize(head);

    return 0;
}