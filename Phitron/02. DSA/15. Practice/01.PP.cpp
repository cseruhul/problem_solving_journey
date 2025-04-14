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

void printlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node *intersectedNode(Node *&list1, Node *&list2)
{
    Node *lista = list1;

    while (lista != NULL)
    {
        Node *listb = list2;
        while (listb != NULL)
        {
            if (lista == listb)
            {
                return lista;
            }

            listb = listb->next;
        }

        lista = lista->next;
    }

    return lista;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    Node *a = new Node(4);
    Node *b = new Node(1);
    Node *c = new Node(8);
    Node *d = new Node(4);
    Node *e = new Node(5);

    Node *aa = new Node(5);
    Node *bb = new Node(6);
    Node *cc = new Node(1);

    head1 = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    head2 = aa;
    aa->next = bb;
    bb->next = cc;
    cc->next = c;

    printlist(head1);
    printlist(head2);

    Node *ans = intersectedNode(head1, head2);

    cout << ans->val;

    return 0;
}