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
    tail = tail->next;
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

void is_asc_sorted_or_not(Node *&head)
{
    int flag = 1;
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            flag = 0;
            break;
        }
        temp = temp->next;
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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

        createList(head, tail, number);
        // printList(head);
    }

    is_asc_sorted_or_not(head);

    return 0;
}