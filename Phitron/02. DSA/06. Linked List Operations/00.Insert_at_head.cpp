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
void pirntList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    pirntList(head);
    cout << endl;

    insert_at_head(head, 50);
    pirntList(head);
    cout << endl;
    
    insert_at_head(head, 500);
    pirntList(head);
    cout << endl;
    
    insert_at_head(head, 500);
    pirntList(head);
    cout << endl;

    return 0;
}