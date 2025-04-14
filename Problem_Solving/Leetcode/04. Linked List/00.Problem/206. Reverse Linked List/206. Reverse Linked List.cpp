#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Insert the elements in Linked List;

void insertAtList(ListNode *head, int value) {
    ListNode *newNode = new ListNode(value);
    ListNode *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Displaying Link list
void display(ListNode *head) {
    ListNode *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

class Solution {
  public:
    ListNode *reverseList(ListNode *head) {
        ListNode *previousNode = NULL;
        ListNode *currentNode = head;
        while (currentNode != NULL) {
            ListNode *tempNode = currentNode->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = tempNode;
        }
        head = previousNode;
        return head;
    }
};

int main() {
    vector<int> arr{1, 2, 3, 4, 5};
    ListNode *head = new ListNode(arr[0]);
    Solution obj;
    ListNode *ans;

    for (int i = 1; i < arr.size(); i++) {
        insertAtList(head, arr[i]);
    }
    display(head);
    ans = obj.reverseList(head);
    cout << endl;
    display(ans);

    return 0;
}