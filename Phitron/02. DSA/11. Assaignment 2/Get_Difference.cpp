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

int max_of_list(Node *head)
{
    int max_value = INT_MIN;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val > max_value)
        {
            max_value = temp->val;
        }

        temp = temp->next;
    }

    return max_value;
}

int min_of_list(Node *head)
{
    int min_value = INT_MAX;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val < min_value)
        {
            min_value = temp->val;
        }

        temp = temp->next;
    }

    return min_value;
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
        createList(head, tail, number);
    }

    int max_val = max_of_list(head);
    int min_val = min_of_list(head);
    int ans = max_val - min_val;
    cout << ans;

    return 0;
}