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

void print_linked_list(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_linked_list_reverse(Node *&head)
{
    if (head == NULL)
        return;

    print_linked_list_reverse(head->next);

    cout << head->val << " ";
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

int main()
{
    int n, num;
    cin >> n;

    Node *head = NULL;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        insert_at_tail(head, num);
    }

    print_linked_list(head);
    cout << endl;
    print_linked_list_reverse(head);

    return 0;
}