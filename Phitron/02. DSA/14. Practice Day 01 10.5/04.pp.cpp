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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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
    newNode->prev = tail;

    tail = newNode;
}

void printForward(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node *&tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int count_elements_in_list(Node *&head)
{
    int i = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return i;
}

void insert_in_any_position(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    int sz = count_elements_in_list(temp);

    // cout << "Size : " << sz << endl;

    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    if (idx == sz)
    {
        insert_at_tail(head, tail, val);
        return;
    }

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    newNode->prev = temp;
    newNode->next->prev = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q, x, v;

    cin >> q;
    // cout << q << endl;
    while (q--)
    {
        cin >> x >> v;
        // cout << x << " " << v << endl;
        int sz = count_elements_in_list(head);
        if (x > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_in_any_position(head, tail, x, v);

            printForward(head);
            printBackward(tail);
        }
    }

    return 0;
}