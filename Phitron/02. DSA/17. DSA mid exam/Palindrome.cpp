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
    newNode->prev = tail;

    tail = newNode;
}

bool isPalindrome(Node *&head, Node *&tail)
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

// void printList(Node *head)
// {
//     Node *temp = head;

//     while (temp)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

int main()
{
    int number;
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> number;

        if (number == -1)
        {
            break;
        }

        createList(head, tail, number);
        // printList(head);
    }

    if (isPalindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}