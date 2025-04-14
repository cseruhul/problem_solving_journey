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

void createDlist(Node *&head, Node *&tail, int val)
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

int sizeOfList(Node *&head)
{
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }

    return sz;
}

void checkEquality(Node *head1, Node *head2)
{
    int flag = 1;

    while (head1 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int number;

    while (true)
    {
        cin >> number;

        if (number == -1)
        {
            break;
        }

        createDlist(head1, tail1, number);
    }

    while (true)
    {
        cin >> number;

        if (number == -1)
        {
            break;
        }

        createDlist(head2, tail2, number);
    }

    int l1size = sizeOfList(head1);
    int l2size = sizeOfList(head2);

    if (l1size != l2size)
        cout << "NO";
    else
        checkEquality(head1, head2);

    return 0;
}