#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {};
    ListNode(int x) : val(x), next(NULL) {};
    ListNode(int x, ListNode *node) : val(x), next(node) {};
};

void createList(ListNode *head, int val) {
    ListNode *newNode = new ListNode(val);
    ListNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(ListNode *head) {
    ListNode *temp = head;

    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
}

class Solution {
  public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {

        ListNode *head = new ListNode(-1);
        ListNode *merged = head;

        ListNode *l1 = list1;
        ListNode *l2 = list2;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                merged->next = l1;
                merged = l1;
                l1 = l1->next;
            } else {
                merged->next = l2;
                merged = l2;
                l2 = l2->next;
            }
        }

        if (l1)
            merged->next = l1;
        else
            merged->next = l2;

        return head->next;
    }
};

int main() {
    vector<int> l1 = {1, 2, 4};
    vector<int> l2 = {1, 3, 5, 7, 9};
    Solution obj;
    ListNode *list1 = new ListNode(l1[0]);
    ListNode *list2 = new ListNode(l2[0]);

    for (int i = 1; i < l1.size(); i++)
        createList(list1, l1[i]);
    for (int i = 1; i < l2.size(); i++)
        createList(list2, l2[i]);

    ListNode *ans = obj.mergeTwoLists(list1, list2);
    printList(ans);
    // printList(list1);
    // cout << endl;
    // printList(list2);
    return 0;
}