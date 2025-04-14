#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void createList(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution
{
public:
    void reverseHelperFunction(ListNode *&head, ListNode *temp)
    {
        if (temp->next == NULL)
        {
            head = temp;
            return;
        }

        reverseHelperFunction(head, temp->next);

        temp->next->next = temp;
        temp->next = NULL;
    }

    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        reverseHelperFunction(head, head);

        return head;
    }
};

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    ListNode *ans = NULL;

    int n;
    while (true)
    {
        cin >> n;

        if (n == -1)
            break;
        createList(head, tail, n);
    }

    Solution obj;
    printList(head);
    ans = obj.reverseList(head);
    printList(ans);

    return 0;
}