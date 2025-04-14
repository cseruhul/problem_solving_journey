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

void create_list(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);

    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {

        Node *head = NULL;
        Node *tail = NULL;
        int num;

        while (1)
        {
            int n;
            cin >> n;

            if (n == -1)
                break;

            create_list(head, tail, n);
        }
        cin >> num;

        int ans = -1;
        Node *temp = head;

        for (int i = 0; temp; i++)
        {
            if (num == temp->val)
            {
                ans = i;
                break;
            }
            temp = temp->next;
        }

        cout << ans << endl;
    }

    return 0;
}