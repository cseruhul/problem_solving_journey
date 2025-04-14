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

void checkDuplicate(Node *&head, vector<int> freq)
{
    int flag = 0;

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] > 1)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    vector<int> frequency(105, 0);

    int number;
    while (1)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }

        frequency[number]++;
        createList(head, tail, number);
    }

    checkDuplicate(head, frequency);

    return 0;
}