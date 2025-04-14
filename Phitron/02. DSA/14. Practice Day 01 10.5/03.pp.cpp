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

void createDList(Node *&head, Node *&tail, int val)
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

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

bool isPalindromeList(Node *&head, Node *&tail)
{
    for (Node *l = head, *r = tail; l != r && l->prev != r; l = l->next, r = r->prev)
    {
        if (l->val != r->val)
        {
            return false;
        }
    }

    return true;
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
        {
            break;
        }

        createDList(head, tail, number);
    }
    // printList(head);

    if (isPalindromeList(head, tail))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}