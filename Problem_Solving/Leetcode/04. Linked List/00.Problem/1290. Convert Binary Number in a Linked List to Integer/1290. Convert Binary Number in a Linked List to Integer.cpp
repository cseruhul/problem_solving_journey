#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *node) : val(x), next(node) {}
};

void createLinkedList(ListNode *head, int value) {
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
        cout << temp->val << " ";
        temp = temp->next;
    }
}

class Solution {
  public:
    int getDecimalValue(ListNode *head) {
        int bin = 0;
        /*Solution using Stack
        ListNode *temp = head;
        stack<int> binStack;
        while (temp != NULL) {
            binStack.push(temp->val);
            temp = temp->next;
        }

        while (!binStack.empty()) {
            bin = bin + binStack.top() * i;
            i = i * 2;
            binStack.pop();
        }
        */

        ListNode *temp = head;
        while (temp != NULL) {
            bin = bin * 2 + temp->val;
            temp = temp->next;
        }

        return bin;
    }
};

int main() {
    vector<int> nums = {1, 1, 1};
    ListNode *head = new ListNode(nums[0]);
    ListNode *ans;
    Solution obj;
    for (int i = 1; i < nums.size(); i++) {
        createLinkedList(head, nums[i]);
    }
    displayList(head);
    cout << endl;
    cout << obj.getDecimalValue(head);
    return 0;
}