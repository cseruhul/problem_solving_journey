#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
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
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;

        Node *deletedNode = tail;
        tail = tail->prev;

        delete deletedNode;
    }

    int top()
    {
        return tail->val;
    }
};

bool comp(MyStack stk1, MyStack stk2)
{
    bool ans = true;
    while (stk1.sz > 0)
    {
        if (stk1.top() != stk2.top())
        {
            ans = false;
            break;
        }
        stk1.pop();
        stk2.pop();
    }

    return ans;
}

int main()
{
    MyStack stk1, stk2;
    int n, m;

    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        stk1.push(num);
    }

    cin >> m;
    while (m--)
    {
        int num;
        cin >> num;
        stk2.push(num);
    }

    if (stk1.sz != stk2.sz)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (comp(stk1, stk2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}