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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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

    void pop()
    {
        if (head != NULL)
        {
            sz--;
            Node *deletedNode = head;
            head = head->next;

            delete deletedNode;

            if (head == NULL)
            {
                tail = NULL;
            }
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        q.push(num);
    }

    while (!q.empty())
    {
        cout << "Size : " << q.size() << " ";
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}