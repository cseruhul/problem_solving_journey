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

class myStack
{
public:
    Node *stk = NULL;
    int sz = 0;
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = stk;
        stk = newNode;
        sz++;
    }
    void pop()
    {
        sz--;
        Node *deletedNode = stk;
        stk = stk->next;
        delete deletedNode;
    }
    int top()
    {
        return stk->val;
    }

    int stk_size()
    {
        return sz;
    }

    bool is_empty()
    {
        if (stk)
            return false;
        else
            return true;
    }
};

int main()
{
    myStack stk1;
    myStack stk2;
    int n;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;

        stk1.push(n);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;

        stk2.push(n);
    }

    if (stk1.stk_size() != stk2.stk_size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!stk1.is_empty())
        {
            if (stk1.top() != stk2.top())
            {
                flag = false;
                break;
            }

            stk2.pop();
            stk1.pop();
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}