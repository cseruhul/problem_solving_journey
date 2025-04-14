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

class myStack
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
        if (head != NULL)
        {
            sz--;
            Node *deletedNode = tail;
            if (head->next == NULL)
            {
                head = NULL;
                tail = NULL;
                delete deletedNode;
                return;
            }

            tail = tail->prev;
            tail->next = NULL;

            delete deletedNode;
        }
    }

    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    while (!st.empty())
    {
        cout << "Size : " << st.size() << " ";
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}