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

class MyStack
{
public:
    Node *head;
    int sz = 0;
    MyStack()
    {
        head = NULL;
    }
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;

        delete deletedNode;
    }
    int size()
    {
        return sz;
    }

    int top()
    {
        return head->val;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

class MyQueue
{
public:
    Node *head;
    Node *tail;
    int sz = 0;

    MyQueue()
    {
        head = NULL;
        tail = NULL;
    }

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
        sz--;
        Node *deletedNode = head;
        head = head->next;

        delete deletedNode;
    }

    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m, number;
    bool flag = true;
    MyStack stk;
    MyQueue que;

    cin >> n >> m;

    while (n--)
    {
        cin >> number;
        stk.push(number);
    }

    while (m--)
    {
        cin >> number;
        que.push(number);
    }

    if (stk.size() != que.size())
    {
        flag = false;
    }
    else
    {
        while (!que.isEmpty())
        {
            if (que.front() != stk.top())
            {
                flag = false;
                break;
            }
            que.pop();
            stk.pop();
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
