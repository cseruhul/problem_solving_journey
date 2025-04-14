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

int listSize(Node *&head)
{
    Node *temp = head;
    int size = 0;

    while (temp->next != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void check_equality(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    int flag = 1;

    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int number;

    while (true)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }
        createList(head1, tail1, number);
    }

    while (true)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }
        createList(head2, tail2, number);
    }

    int list1_size = listSize(head1);
    int list2_size = listSize(head2);

    if (list1_size != list2_size)
    {
        cout << "NO";
    }
    else
    {
        check_equality(head1, head2);
    }

    return 0;
}