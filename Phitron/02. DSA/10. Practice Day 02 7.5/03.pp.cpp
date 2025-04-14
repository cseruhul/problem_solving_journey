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

int max_from_list(Node *&head)
{
    int ans = INT_MIN;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val > ans)
        {
            ans = temp->val;
        }
        temp = temp->next;
    }

    return ans;
}

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
    }

    int ans = max_from_list(head);

    cout << ans << endl;

    return 0;
}