#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string url;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->url = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void createList(Node *&head, Node *&tail, string val)
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

void fun_for_visit(Node *&head, Node *&position, string str)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->url == str)
        {
            break;
        }

        temp = temp->next;
    }

    if (temp != NULL)
    {
        cout << str << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }

    position = temp;
}

void fun_for_next(Node *&tail, Node *&position)
{
    if (position == NULL || position->next == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }

    Node *temp = position;
    temp = temp->next;

    cout << temp->url << endl;

    position = temp;
}

void fun_for_prev(Node *&head, Node *&position)
{
    if (position == NULL || position->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }

    Node *temp = position;
    temp = temp->prev;

    cout << temp->url << endl;

    position = temp;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->url << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *position = head;

    while (1)
    {
        string website;
        cin >> website;

        if (website == "end")
            break;

        createList(head, tail, website);
    }

    int q;
    cin >> q;

    while (q--)
    {
        string a, b;
        cin >> a;

        if (a == "visit")
        {
            cin >> b;
            fun_for_visit(head, position, b);
        }
        else if (a == "prev")
        {
            fun_for_prev(head, position);
        }
        else if (a == "next")
        {
            fun_for_next(tail, position);
        }
    }

    return 0;
}