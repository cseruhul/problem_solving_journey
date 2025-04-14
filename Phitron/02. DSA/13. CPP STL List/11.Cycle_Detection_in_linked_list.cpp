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

void detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    int flag = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Cycle Detected." << endl;
    }
    else
    {
        cout << "Cycle Not detected." << endl;
    }
}

int main()
{
    Node *head1 = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);

    head1->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = d;

    Node *head2 = NULL;
    Node *tail = NULL;
    int number;

    while (true)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }

        createList(head2, tail, number);
    }

    detectCycle(head1);
    detectCycle(head2);

    return 0;
}