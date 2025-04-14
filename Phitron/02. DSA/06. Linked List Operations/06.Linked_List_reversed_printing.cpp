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

void prinList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void printListReversed(Node *&head)
{
    Node *temp = head;
    if (temp == NULL)
        return;

    printListReversed(temp->next);
    cout << temp->val << " ";
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
    tail = newNode;
}

int main()
{
    int n;
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, n);
        }
    }
    prinList(head);
    printListReversed(head);

    return 0;
}