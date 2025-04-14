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

int countElement(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void printMiddle(Node *&head)
{
    Node *temp = head;
    int n = countElement(head);

    if (n % 2)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
    else
    {
        for (int i = 0; i < (n / 2) - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
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

    printMiddle(head);

    return 0;
}