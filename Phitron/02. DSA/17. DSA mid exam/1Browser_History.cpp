#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string address;
    Node *next;
    Node *prev;

    Node(string url)
    {
        this->address = url;
        this->next = NULL;
        this->prev = NULL;
    }
};

void visited_address(Node *&head, Node *&tail, Node *&current, string url)
{
    Node *newNode = new Node(url);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        current = tail;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
    current = tail;
}

void visit(Node *&head, Node *&current, string url)
{
    Node *temp = head;
    bool flag = false;

    while (temp != NULL)
    {
        if (temp->address == url)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }

    if (flag)
    {
        cout << url << endl;
        current = temp;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void next(Node *&current)
{
    Node *temp = current;
    if (current->next == NULL || current == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }

    temp = temp->next;
    cout << temp->address << endl;
    current = temp;
}

void prev(Node *&current)
{
    Node *temp = current;
    if (current == NULL || current->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }

    temp = temp->prev;
    cout << temp->address << endl;
    current = temp;
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->address << " " << endl;
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    string url;
    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = NULL;

    while (true)
    {
        cin >> url;

        if (url == "end")
        {
            break;
        }

        visited_address(head, tail, curr, url);
    }

    int n;
    string command;
    cin >> n;

    while (n--)
    {
        cin >> command;
        if (command == "visit")
        {
            cin >> url;
            visit(head, curr, url);
        }
        else if (command == "prev")
        {
            prev(curr);
        }
        else if (command == "next")
        {
            next(curr);
        }
    }

    return 0;
}