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
        cout << temp->val << "-> ";
        temp = temp->next;
    }
}

class Solution {
  public:
    ListNode *deleteDuplicates(ListNode *head) {

        // Recursive Approach
        // Base Case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *newHead = deleteDuplicates(head->next);

        if (head->val == newHead->val) {
            return newHead;
        } else {
            head->next = newHead;
            return head;
        }

        /*
                //Iterative approach;
                if (head == NULL || head->next == NULL)
                    return head;
                ListNode *temp = head;
                while (temp->next != NULL) {
                    if (temp->val == temp->next->val) {
                        ListNode *node = temp->next;
                        temp->next = temp->next->next;
                        delete node;
                    } else {
                        temp = temp->next;
                    }
                }
        return head;
        */
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 3, 4, 5, 5, 5, 5, 6, 7, 7, 8};
    ListNode *head = new ListNode(nums[0]);
    ListNode *ans;
    Solution obj;

    for (int i = 1; i < nums.size(); i++) {
        createLinkedList(head, nums[i]);
    }
    displayList(head);

    ans = obj.deleteDuplicates(head);
    cout << endl;
    displayList(ans);

    return 0;
}