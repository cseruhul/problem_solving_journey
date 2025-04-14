#include <bits/stdc++.h>
using namespace std;
/**
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
  public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {};
    ListNode(int x) : val(x), next(NULL) {};
    ListNode(int x, ListNode *node) : val(x), next(node) {};
};

void insertIntoList(ListNode *head, int value) {
    ListNode *newNode = new ListNode(value);
    ListNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void displayList(ListNode *head) {
    ListNode *temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << temp->val;
}

class Solution {
  public:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == nullptr) return head;
        ListNode *dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode *previousNode = dummyNode;
        ListNode *currentNode = head;

        while (currentNode) {
            if (currentNode->val == val) {
                previousNode->next = currentNode->next;
                // ListNode *deleteNode = previousNode->next;
                // delete deleteNode;
            } else {
                previousNode = currentNode;
            }
            currentNode = currentNode->next;
        }

        return dummyNode;
    }
};

int main() {
    // vector<int> nums = {};
    vector<int> nums = {1, 2, 6, 3, 4, 5, 6};
    // vector<int> nums = {7, 7, 7, 7, 7, 7, 7, 7};
    int val = 6;
    ListNode *head = new ListNode(nums[0]);
    ListNode *answer;
    Solution obj;

    for (int i = 1; i < nums.size(); i++) {
        insertIntoList(head, nums[i]);
    }
    displayList(head);
    cout << endl;
    answer = obj.removeElements(head, val);
    displayList(answer);
    return 0;
}