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

void create_list(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);

    if (!head)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

int count_list_element(Node *head)
{
    int count = 0;

    while (head)
    {
        count++;
        head = head->next;
    }

    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int n;
        cin >> n;

        if (n == -1)
            break;

        create_list(head, tail, n);
    }

    int sz = count_list_element(head);
    Node *temp = head;

    if (sz % 2)
    {
        for (int i = 0; i < sz / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
    else
    {
        for (int i = 0; i < sz / 2 - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }

    return 0;
}