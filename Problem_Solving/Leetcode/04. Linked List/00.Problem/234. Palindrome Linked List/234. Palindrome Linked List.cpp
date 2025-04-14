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

void insertNode(ListNode *head, int x) {
    ListNode *newNode = new ListNode(x);

    ListNode *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(ListNode *head) {
    ListNode *temp = head;
    while (temp != 0) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
/*

ListNode *reverseList(ListNode *head) {
    ListNode *previousNode = NULL;
    ListNode *currentNode = head;
    while (currentNode != NULL) {
        ListNode *temp = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = temp;
    }
    head = previousNode;

    return head;
}
*/

class Solution {
  public:
    ListNode *current = NULL;
    bool palindromeHelper(ListNode *head) {
        if (head == NULL) return true;
        bool answer = palindromeHelper(head->next);
        if (head->val != current->val)
            return false;
        current = current->next;
        return answer;
    }
    bool isPalindrome(ListNode *head) {

        /*Cheecking palindrome list using Stack [Taking extra space] */
        /*
        stack<ListNode *> nodeStack;
        ListNode *temp = head;
        while (temp != NULL) {
            nodeStack.push(temp);
            temp = temp->next;
        }
        temp = head;
        cout << endl;
        while (temp != NULL) {
            cout << temp->val << "==" << nodeStack.top()->val << " \n";
            if (temp->val != nodeStack.top()->val) {
                return false;
            } else {
                temp = temp->next;
                nodeStack.pop();
            }
        }
        */

        /*Checking Palindrome list partitioning into two parts . no extra space.*/
        /*
        ListNode *s = head;
        ListNode *f = head;

        while (f->next != NULL && f->next->next != NULL) {
            s = s->next;
            f = f->next->next;
        }
        ListNode *revHead = reverseList(s->next);

        s = head;
        while (revHead != NULL) {
            if (revHead->val != s->val)
                return false;
            revHead = revHead->next;
            s = s->next;
        }
        */
        /*Checking palindrome without partitioning*/
        current = head;
        return palindromeHelper(head);
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 1};
    ListNode *head = new ListNode(nums[0]);
    Solution obj;
    for (int i = 1; i < nums.size(); i++) {
        insertNode(head, nums[i]);
    }
    displayList(head);
    cout << endl
         << obj.isPalindrome(head);

    return 0;
}