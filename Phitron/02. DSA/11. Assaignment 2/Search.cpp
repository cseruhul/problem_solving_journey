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

// void printList(Node *&head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

void search_the_number(Node *&head, int x)
{
    Node *temp = head;
    int i = 0, flag = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
        i++;
    }

    if (flag == 1)
        cout << i << endl;
    else
        cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, number;

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
        cin >> x;

        search_the_number(head, x);
    }

    return 0;
}