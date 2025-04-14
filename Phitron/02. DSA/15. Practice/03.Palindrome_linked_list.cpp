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
    void reverseList(ListNode *&head, ListNode *temp)
    {
        if (temp->next == NULL)
        {
            head = temp;
            return;
        }

        reverseList(head, temp->next);

        temp->next->next = temp;
        temp->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;

        ListNode *newHead = NULL;
        ListNode *newtail = NULL;
        ListNode *temp = head;

        while (temp != NULL)
        {
            createList(newHead, newtail, temp->val);
            temp = temp->next;
        }
        reverseList(newHead, newHead);

        ListNode *temp1 = head;
        ListNode *temp2 = newHead;

        while (temp1 != NULL)
        {
            if (temp1->val != temp2->val)
                return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;
    }
};

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    bool ans;

    int n;
    while (true)
    {
        cin >> n;

        if (n == -1)
            break;
        createList(head, tail, n);
    }

    Solution obj;
    // printList(head);
    ans = obj.isPalindrome(head);

    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;


    return 0;
}